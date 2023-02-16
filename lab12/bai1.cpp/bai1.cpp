#include <iostream>
int main()
{
 int a, b;
 printf("Moi ban nhap 2 so: ");
 scanf("%d%d", &a, &b);
 printf("Tong cua %d va %d la %d\n",a, b, a+b);
 printf("Hieu cua %d va %d la %d\n",a, b,  a-b);
 printf("Tich cua %d va %d la %d\n",a, b,  a*b);
 printf("Thuong cua %d va %d la %f\n",a, b, (float)a/b);
 return 0;
}
