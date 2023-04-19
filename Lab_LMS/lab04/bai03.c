//Viet chuong trinh kiem tra so chinh phuong

#include <stdio.h>

int main() {
	
	unsigned int check=2, num, flag=0;
	
	printf("Enter a number you wanna check: ");
	scanf("%u",&num);
	
	if (num==1) {
		printf("%u is a perfect square",num);
	} else {
		while (check<=num/2) {
			if (check*check==num) {
				printf("%u is a perfect square",num);
				flag=1;
				break;
			} else {
				check++;
			}
		}
		if (flag==0) {
			printf("%u is not a perfect square",num);
		}
	}
	
	return 0;
}
