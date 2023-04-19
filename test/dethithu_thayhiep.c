#include <stdio.h>

int main() {
	
	float khoiNuoc;
	int nguoi;
	
	printf("Nhap so luong nguoi tieu thu dien trong thang: ");
	scanf("%d",&nguoi);
	
	printf("Nhap so khoi nuoc da tieu thu trong thang: ");
	scanf("%f",&khoiNuoc);
	
	if (khoiNuoc<=4) {
		printf("So tien can phai dong: %.0f",khoiNuoc*nguoi*4000);
	} else if (khoiNuoc<=6) {
		printf("So tien can phai dong: %.0f",khoiNuoc*nguoi*5000);
	} else {
		printf("So tien can phai dong: %.0f",khoiNuoc*nguoi*6000);
	}
	
	return 0;
}
