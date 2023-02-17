#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	const float Pi = 3.14;
	float A; //Duong kinh
	
	printf("Nhap vao duong kinh hinh tron: "); 
	scanf("%f",&A);
	printf("\nDien tich hinh tron: %f",A*Pi);
	printf("\nDien tich hinh vuong la: %f" ,A*A);
	printf("\nDien tich hinh tam giac can la: %f", A*A/2);
	return 0;
}
