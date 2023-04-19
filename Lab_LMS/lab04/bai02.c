//Viet chuong trinh xac dinh so nguyen to

#include <stdio.h>

int main() {
	unsigned int num;
	int check=2, flag=0;
	printf("Enter a number need to check: ");
	scanf("%u",&num);
	
	//check if num==1 is not a prime
	if (num==1) {
		printf("%u is not a prime number",num);
	} else {
		
		//check divide from 2 to num/2
		while (check<=num/2) {
			
			//break when divide completely to a number
			if (num%check==0) {
				printf("%u is not a prime number",num);
				flag=1;
				break;
			} else {
				check++;
			}
		}
		
		//flag==0 means the number has been checked already and didn't divide to any other numbers
		if (flag==0) {
		printf("%u is a prime number",num);
		}
	}

	return 0;
}
