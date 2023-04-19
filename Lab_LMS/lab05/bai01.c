//Viet chuong trinh tim so lon nhat

#include <stdio.h>

int Max(int num1, int num2, int num3) {
	int max = num1;
	if (max<num2) {
		max = num2;
		if (max<num3) {
			max = num3;
		}
		
	} else {
		if (max<num3) {
			max = num3;
		}
	}
	
	return max;
}

int main() {
	int num1, num2, num3;
	
	printf("Enter 3 numbers to compare: ");
	scanf("%d %d %d",&num1,&num2,&num3);
	
	printf("Max of %d, %d and %d: %d",num1,num2,num3,Max(num1,num2,num3));
	
	return 0;
}
