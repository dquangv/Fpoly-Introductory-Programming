//Viet chuong trinh tinh chu vi, dien tich cua hinh chu nhat

#include <stdio.h>
int main() {
	float length, width;
	printf("Input length and width: ");
	scanf("%f%f",&length,&width);
	printf("Perimeter of rectangle: %.2f\n",(length+width)*2);
	printf("Surface of rectangle: %.2f",length*width);

	return 0;
}
