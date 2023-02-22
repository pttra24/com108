#include <stdio.h>

int main() {
  // Khai báo mang one
  int one[5] = {2, 5, 3, 6, 3};
  
  // Khai báo và khoi tao mang two
  int two[5];
  for (int i = 0; i < 5; i++) {
    two[i] = one[i] + 3;
  }
  
  // In ra mang two
  printf("Mang two la: ");
  for (int i = 0; i < 5; i++) {
    printf("%d ", two[i]);
  }
  printf("\n");
  
  // tim vi tri cua cac phan tu co gia tri bang nhau trong mang two 
  printf("Vi tri cua cac phan tu co gia tri bang nhau trong mang two la: ");
  for (int i = 0; i < 5; i++) {
    for (int j = i + 1; j < 5; j++) {
      if (two[i] == two[j]) {
        printf("(%d,%d) ", i, j);
      }
    }
  }
  
  return 0;
}
