//Viet chuong trinh menu cho 3 chuong trinh tren

#include <stdio.h>
#include <math.h>

int main() {
	
	int choice;
	printf("Function 1: Ranked Academic\n");
	printf("Function 2: Quadratic Equation\n");
	printf("Function 3: Electricity consumption\n");
	printf("Which function do you wanna use (1, 2, 3): ");
	scanf("%d",&choice);
	
	float mark;
	double a,b,c;
	float arr[6] = {1.678, 1.734, 2.014, 2.536, 2.834, 2.927};
	unsigned int consume;
	
	switch (choice) {
		case 1:
			printf("Input your mark: ");
			scanf("%f",&mark);
			if (mark>=9){
				printf("Excellent");
			} else if (mark>=8){
				printf("Good");
			} else if (mark>=6.5){
				printf("Fair");
			} else if (mark>=5) {
				printf("Average");
			} else if (mark>=3.5) {
				printf("Poor");
			} else {
				printf("Weak");
			}
			break;
			
		case 2:
			printf("Input const a, b, c: ");
			scanf("%lf%lf%lf",&a,&b,&c);
			if (a==0) {
				if (b==0) {
					if (c==0) {
						printf("The equation has infinitely many solutions");
					} else {
						printf("The equation has no solutions");
					}
				} else {
					printf("The solution to the equation is x = %.2lf",-c/b);
				}
			} else {
				double delta = b*b - 4*a*c;
				if (delta<0) {
					printf("The equation has no solutions");
				} else if (delta==0) {
					printf("The equation has a double root at x = %.2lf",-b/(2*a));
				} else {
					printf("The equation has 2 distinct roots which are x = %.2f and x = %.2lf",(-b+sqrt(delta))/(2*a),(-b-sqrt(delta))/(2*a));
				}
			}
			break;
			
		case 3:
			printf("Input monthly electricity you consume: ");
			scanf("%u",&consume);
			if (consume<=50) {
				printf("The amount of money you need to pay: %.2f",consume*arr[0]);
			} else if (consume<=100) {
				printf("The amount of money you need to pay: %.2f",consume*arr[1]);
			} else if (consume<=200) {
				printf("The amount of money you need to pay: %.2f",consume*arr[2]);
			} else if (consume<=300) {
				printf("The amount of money you need to pay: %.2f",consume*arr[3]);
			} else if (consume<=400) {
				printf("The amount of money you need to pay: %.2f",consume*arr[4]);
			} else {
				printf("The amount of money you need to pay: %.2f",consume*arr[5]);
			}
			break;
			
		default:
			printf("The number you entered is invalid");
	}
	
	return 0;
}
