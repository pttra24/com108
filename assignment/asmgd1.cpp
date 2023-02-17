#include <stdio.h>
#include <stdlib.h>

void CN1_KiemTraSoNguyen();
void CN2_UocChungBoiChung();
void CN3_ChuongTrinhTinhTienChoQuanKaraoke();
void CN4_TinhTienDien();
void CN5_ChucNangDoiTien();
void CN6_XayDungChucNangTinhLaiSuatVayNganHangTraGop();
void CN7_XayDungchuongTrinhVayTienMuaXe();
void CN8_SapXepThongTinSinhvien();
void CN9_XayDungGame();
void CN10_XayDungChuongTrinhTinhToanThuatSo();

#include <stdio.h>

// hàm kiem tra so nguyên
void checkInteger() {
    int num;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &num);
    if (num == 0) {
        printf("%d la so khong am khong duong", num);
    } else if (num > 0) {
        printf("%d la so nguyen duong", num);
    } else {
        printf("%d la so nguyen am", num);
    }
}

// hàm tính uoc chung và boi chung
void calculateCommonFactors() {
    int num1, num2, a, b, lcm, gcd, temp;
    printf("Nhap hai so nguyen: ");
    scanf("%d %d", &num1, &num2);

    a = num1;
    b = num2;
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    gcd = a;
    lcm = (num1 * num2) / gcd;

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", num1, num2, gcd);
    printf("Boi chung nho nhat cua %d va %d la: %d\n", num1, num2, lcm);
}

// hàm tính tien karaoke
void calculateKaraokeCharge() {
    int startHour, duration, basePrice, discount, total;
    printf("Nhap gio bat dau (tu 12 den 23): ");
    scanf("%d", &startHour);
    printf("Nhap so gio su dung: ");
    scanf("%d", &duration);

    if (startHour < 12 || startHour > 23) {
        printf("Quan khong hoat dong vao thoi diem nay");
        return;
    }

    basePrice = (duration > 3) ? 150000 + 45000 * (duration - 3) : 50000 * duration;

    if (startHour >= 14 && startHour <= 17) {
        discount = basePrice * 0.1;
    } else if (startHour >= 18) {
        discount = basePrice * 0.3;
    } else {
        discount = 0;
    }

    total = basePrice - discount;

    printf("Tong tien thanh toan: %d", total);
}

int main() {
    int choice;

    do {
        printf("\n====== MENU ======\n");
        printf("1. Kiem tra so nguyen\n");
        printf("2. Tim uoc chung va boi chung cua hai so\n");
        printf("3. Tinh tien karaoke\n");
        printf("0. Thoat chuong trinh\n");
        printf("Moi ban chon chuc nang: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkInteger();
                break;
            case 2:
                calculateCommonFactors();
                break;
            case 3:
                calculateKaraokeCharge();
                break;
            case 0:
                printf("Ket thuc chuong trinh.");
                break;
            default:
                printf("Chuc nang khong hop le, vui long chon lai");
                break;
        }
    } while (choice != 0);

    return 0;
}
