//Viet chuong trinh chon phep tinh thuc hien

#include <stdio.h>

int main() {
	
	//Truong hop neu nhap 2 so truoc khi nhap ki tu
	//Sau khi enter so thu 2, may hieu enter la 1 ki tu, nghia la may tu dien ki tu enter vao dong printf "Enter your choice"
	//De ngat khoi lenh nay, su dung fflush(stdin);
	
	char choice;
	printf("Input your choice (+,-,*,/): ");
	scanf("%c",&choice);
	
	float num1,num2;
	printf("Input num 1 and num 2: ");
	scanf("%f%f",&num1,&num2);
	switch (choice) {
		case '+':
			printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
			break;
			
		case '-':
			printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
			break;
			
		case '*':
			printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
			break;
			
		case '/':
			printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
			break;
	}
	
	
	return 0;
}
