#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str1[50ú], str2[50];
    int i, len, no_of_t = 0;

    // Nhap chuoi str1 tu bàn phím
    printf("Nhap vao chuoi str1: ");
    fgets(str1, sizeof(str1), stdin);
    len = strlen(str1);

    // Tính do dài chuoi bao gom khoang trng
    printf("Do dai cua chuoi bao gom khoang trang la %d\n", len);

    // Tính do dai chuoi khong bao gom  khoang trong
    int no_of_spaces = 0;
    for (i = 0; i < len; i++)
    {
        if (str1[i] == ' ')
        {
            no_of_spaces++;
        }
    }
    printf("Do dai cua chuoi khong bao gom khoang trang la %d\n", len - no_of_spaces);

    // Tìm so luong va vi tri chu "t"
    printf("Vi tri cac chu 't' trong chuoi la: ");
    for (i = 0; i < len; i++)
    {
        if (str1[i] == 't' || str1[i] == 'T')
        {
            no_of_t++;
            printf("%d ", i);
        }
    }
    printf("\nSo luong chu 't' trong chuoi la: %d\n", no_of_t);

    // Sao chép chuoi str1 vao chuoi str2
    strcpy(str2, str1);

    // Thay the chu cai dau thành chu A
    for (i = 0; i < len; i++)
    {
        if (isalpha(str2[i]) && (i == 0 || str2[i - 1] == ' '))
        {
            str2[i] = 'A';
        }
    }
    printf("Chuoi str2 sau khi thay the: %s\n", str2);

    // In ra chuoi chu in hoa cua str1
    printf("Chuoi in hoa cua str1 la: ");
    for (i = 0; i < len; i++)
    {
        printf("%c", toupper(str1[i]));
    }
    printf("\n");

    // In ra chuoi chu thuong cua str2
    printf("Chuoi in thuong cua str2 la: ");
    for (i = 0; i < len; i++)
    {
        printf("%c", tolower(str2[i]));
    }
    printf("\n");

    // So sánh chuoi str1 và str2
    if (strcmp(str1, str2) == 0)
    {
        printf("Hai chuoi la giong nhau\n");
    }
    else
    {
        printf("Hai chuoi khac nhau\n");
    }

    return 0;
}