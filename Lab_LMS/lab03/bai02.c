//Viet chuong trinh giai phuong trinh

#include <stdio.h>
#include <math.h>

int main() {
	double a,b,c;
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
	
	
	return 0;
}
