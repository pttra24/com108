#include <stdio.h>

#define A "Xep loai hoc sinh A"
#define B "Xep loai hoc sinh B"
#define C "Xep loai hoc sinh C"
#define D "Xep loai hoc sinh D"

int main()
{
    // Nhap diem ba mon
    char ten[50];
    float diemToan;
    float diemLy;
    float diemHoa;
    float diemTrungbinh;

    printf("Nhap ten hoc sinh: ");
    scanf("%s", ten);
    printf("\nNhap diem Toan = ");
    scanf("%f", &diemToan);
    printf("\nNhap diem Ly = ");
    scanf("%f", &diemLy);
    printf("\nNhap diem Hoa = ");
    scanf("%f", &diemHoa);

    diemTrungbinh = (diemToan + diemLy + diemHoa) / 3;
    printf("\ndiemTrungbinh = %2.f\n", diemTrungbinh);
    
    if (diemTrungbinh < 5)
    {
        printf(D);
    }
    else if (diemTrungbinh < 6)
    {
        printf(C);
    }
    else if (diemTrungbinh < 8)
    {
        printf(B);
    }
    else
    {
        printf(A);
    }

    return 0;
}

