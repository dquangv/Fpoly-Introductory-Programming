//Viet chuong trinh tinh chu vi, dien tich hinh tron

#include <stdio.h>
#define pi 3.14

int main() {
	float radius;
	printf("Input radius of circle: ");
	scanf("%f",&radius);
	printf("Perimeter of circle: %.2f\n",2*pi*radius);
	printf("Surface of circle: %.2f",pi*radius*radius);
	
	
	return 0;
}
