#include <stdio.h>
#include <math.h>

// Hàm tính tổng 2 số
int sum(int a, int b) {
    return a + b;
}

// Hàm giải phương trình bậc 2
void solveQuadraticEquation(float a, float b, float c) {
    float delta = b * b - 4 * a * c;
    if (delta < 0) {
        printf("Phuong trinh vo nghiem.\n");
    } else if (delta == 0) {
        float x = -b / (2 * a);
        printf("Phuong trinh co nghiem kep x = %f.\n", x);
    } else {
        float x1 = (-b + sqrt(delta)) / (2 * a);
        float x2 = (-b - sqrt(delta)) / (2 * a);
        printf("Phuong trinh co 2 nghiem phan biet:\n");
        printf("x1 = %f\n", x1);
        printf("x2 = %f\n", x2);
    }
}

int main() {
    int choice;
    do {
        printf("MENU:\n");
        printf("1. Cong 2 so nguyen.\n");
        printf("2. Giai phuong trinh bac 2.\n");
        printf("0. Thoat chuong trinh.\n");
        printf("Moi ban chon chuc nang: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                int a, b;
                printf("Nhap 2 so nguyen: ");
                scanf("%d%d", &a, &b);
                printf("Tong cua 2 so la: %d\n", sum(a, b));
                break;
            }
            case 2: {
                float a, b, c;
                printf("Nhap he so a, b, c cua phuong trinh ax^2 + bx + c = 0: ");
                scanf("%f%f%f", &a, &b, &c);
                solveQuadraticEquation(a, b, c);
                break;
            }
            case 0: {
                printf("Chuong trinh da thoat.\n");
                break;
            }
            default: {
                printf("Khong co chuc nang nay. Moi ban chon lai.\n");
                break;
            }
        }
    } while (choice != 0);
    return 0;
}