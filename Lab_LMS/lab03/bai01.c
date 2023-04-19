//Viet chuong trinh xep loai hoc luc

#include <stdio.h>

int main(){
	float mark;
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
	
	return 0;
}
