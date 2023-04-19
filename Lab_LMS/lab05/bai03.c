//Viet chuong trinh hoan vi 2 gia tri nhap tu ban phim

#include <stdio.h>

void Swap(int *num1, int *num2) {
	int temp;
	temp=*num1;
	*num1=*num2;
	*num2=temp;
}

int main(){
	int num1, num2;
	
	printf("Enter 2 numbers to swap: ");
	scanf("%d %d",&num1,&num2);
	printf("Before swap: %d %d\n",num1,num2);
	
	Swap(&num1,&num2);
	printf("After swap: %d %d",num1,num2);
	return 0;
}
