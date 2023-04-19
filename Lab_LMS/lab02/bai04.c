//Viet chuong trinh tinh diem trung binh

#include <stdio.h>

int main(){
	float math, physics, chemistry;
	printf("Input your math, physics and chemistry marks: ");
	scanf("%f, %f, %f",&math,&physics,&chemistry);
	printf("Your average mark: %.2f",(math*3+physics*2+chemistry)/6);
	
	return 0;
}
