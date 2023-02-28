#include <stdio.h>

// Định nghĩa cấu trúc SinhVien
typedef struct {
    int day;
    int month;
    int year;
} Date;

typedef struct {
    char maSV[100];
    char ho[100];
    char ten[100];
    Date dob;
    char queQuan[100];
    char gioiTinh[100];
    char maLop[100];
} SinhVien;
int main() {
    struct SinhVien dsSV[5];

    printf("Nhap thong tin cho 5 sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i+1);
        printf("Ma SV: ");
        scanf("%s", dsSV[i].maSV);
        printf("Ho: ");
        scanf("%s", dsSV[i].ho);
        printf("Ten: ");
        scanf("%s", dsSV[i].ten);
        printf("Ngay sinh (dd/mm/yyyy): ");
        scanf("%d/%d/%d", &dsSV[i].dob.ngay, &dsSV[i].dob.thang, &dsSV[i].dob.nam);
        printf("Que quan: ");
        scanf("%s", dsSV[i].queQuan);
        printf("Gioi tinh: ");
        scanf("%s", dsSV[i].gioiTinh);
        printf("Ma lop: ");
        scanf("%s", dsSV[i].maLop);
        printf("\n");
    }

    printf("%-15s %-20s %-10s %-10s %-12s %-15s %-10s\n", "Ma SV", "Ho", "Ten", "Ngay sinh", "Que quan", "Gioi tinh", "Ma lop");
    for (int i = 0; i < 5; i++) {
        printf("%-15s %-20s %-10s %02d/%02d/%d %-12s %-15s %-10s\n", dsSV[i].maSV, dsSV[i].ho, dsSV[i].ten, dsSV[i].dob.ngay, dsSV[i].dob.thang, dsSV[i].dob.nam, dsSV[i].queQuan, dsSV[i].gioiTinh, dsSV[i].maLop);
    }

    return 0;
}
