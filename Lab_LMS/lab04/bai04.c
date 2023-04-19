//Viet chuong trinh menu cho 3 chuc nang tren

#include <stdio.h>

int main() {
	
	unsigned int choice;
	unsigned int min,max;
	float div = 0, sum = 0;
	unsigned int num;
	int check2=2, flag=0;
	unsigned int check3=1, num3, flag3=0;
	
	do {
		printf("Function 1: Count average\n");
		printf("Function 2: Check the prime number\n");
		printf("Function 3: Check the perfect square\n");
		printf("Function 4: Exit\n");
		printf("Choose the function you want to use (1, 2, 3, 4): ");
		scanf("%u",&choice);
		printf("\n");
	} while (choice>4);
	
	switch (choice) {
		
		case 1:
			printf("Function 1: Count average\n");
			printf("Input min and max: ");
			scanf("%u %u",&min,&max);
			int check = min;
			while (check <= max) {
				if (check%2==0) {
					sum+=check;
					div++;
				}
				check++;
			}
			
			printf("Average = %.2f",sum/div);
			break;
		
		
		case 2:
			printf("Function 2: Check the prime number\n");
			printf("Enter a number need to check: ");
			scanf("%u",&num);
	
			//check if num==1 is not a prime
			if (num==1) {
				printf("%u is not a prime number",num);
			} else {
		
				//check divide from 2 to num/2
				while (check2<=num/2) {
			
					//break when divide completely to a number
					if (num%check2==0) {
						printf("%u is not a prime number",num);
						flag=1;
						break;
					} else {
						check2++;
					}
				}
		
			//flag==0 means the number has been checked already and didn't divide to any other numbers
				if (flag==0) {
					printf("%u is a prime number",num);
				}
			}
			break;
			
			
		case 3:
			printf("Function 3: Check the perfect square\n");
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
			break;
			
			
		case 4:
			break;
	}
	
	return 0;
}
