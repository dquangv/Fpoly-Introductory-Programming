//Viet chuong trinh nhap 2 ki tu sau do in ra ma ASCII cua cac ky tu giua khoang

#include <stdio.h>

int main() {
	
	char character1, character2;
	
	printf("Enter 2 character: ");
	scanf("%c %c",&character1,&character2);
	
	int decimalMin = (int) character1, decimalMax = (int) character2;
	int check = decimalMin;
	
	while (check<=decimalMax) {
		printf("%c\t%d\n",check,check);
		check++;
	}
	
	
	
	return 0;
}
