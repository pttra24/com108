#include <stdio.h>

int main() {
    int a[3][3] = {{3, 9, 11}, {2, 6, 15}, {4, 7, 24}};
    int num, f;
    printf("Nhap vao mot so tu 1 den 100: ");
    scanf("%d", &num);
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (a[i][j] == num) {
                printf("Vi tri cua so %d la [%d][%d]\n", num, i, j);
                f = 1;
            }
        }
    }
    if (!f) {
        printf("So %d khong co trong mang\n", num);
    }
    return 0;
}
