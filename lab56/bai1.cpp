#include <stdio.h>
#include <string.h>

int main()
{
    char name[50];
    float diemToan, diemLy, diemHoa;
    float diemTrungbinh;

    printf("\nNhap ten hoc sinh: ");
    scanf("%s", &name);

    printf("\nNhap diem toan: ");
    scanf("%f", &diemToan);
    while (diemToan > 10 || diemToan < 0)
    {
        printf("\nNhap lai: ");
        scanf("%f", &diemToan);
    }

    printf("\nNhap diem ly: ");
    scanf("%f", &diemLy);
    while (diemLy > 10 || diemLy < 0)
    {
        printf("\nNhap lai: ");
        scanf("%f", &diemLy);
    }

    printf("\nNhap diem hoa: ");
    scanf("%f", &diemHoa);
    while (diemHoa > 10 || diemHoa < 0)
    {
        printf("\nNhap lai: ");
        scanf("%f", &diemHoa);
    }

    diemTrungbinh = (diemToan + diemLy + diemHoa) / 3;

    switch ((int)diemTrungbinh)
    {
    case 10:
    case 9:
        printf("Xep loai A", name);
        break;
    case 8:
    case 7:
        printf("Xep loai B", name);
        break;
    case 6:
    case 5:
        printf("Xep loai C", name);
        break;
    default:
        printf("Xep loai D", name);
        break;
    }
    return 0;
}