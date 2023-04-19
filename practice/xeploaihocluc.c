#include <stdio.h>

int main() {
	double aveMark;
	printf("Please input your mark: ");
	scanf("%lf", &aveMark);
	if (aveMark>=5){
		printf("Passed");
	} else{
		printf("Failed");
	}
}
