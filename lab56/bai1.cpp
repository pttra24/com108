#include <stdio.h>

int main() {
    char ten[50];
    float toan, ly, hoa, diemTB;
    int xepLoai;

    printf("Nhap ten hoc sinh: ");
    scanf("%s", ten);
    
    printf("Nhap diem toan: ");
    scanf("%f", &toan);
    
    printf("Nhap diem ly: ");
    scanf("%f", &ly);
    
    printf("Nhap diem hoa: ");
    scanf("%f", &hoa);

    diemTB = (toan + ly + hoa) / 3;

    switch ((int)diemTB) {
        case 9:
        case 10:
            xepLoai = 'A';
            break;
        case 7:
        case 8:
            xepLoai = 'B';
            break;
        case 5:
        case 6:
        	xepLoai = 'C';
        default:
            xepLoai = 'D';
            break;
    }

    printf("\nTen hoc sinh: %s", ten);
    printf("\nDiem trung binh: %.2f", diemTB);
    printf("\nXep loai: %c", xepLoai);

    return 0;
}
