#include <stdio.h>

int main(){
	unsigned int num;
	printf("Please input a natural number: ");
	scanf("%d",&num);
	if (num%2==0){
		printf("%d is an even",num);
	} else{
		printf("%d is an odd",num);
	}
}
