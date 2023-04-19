//Viet chuong trinh tinh tien dien

#include <stdio.h>
int main() {
	float arr[6] = {1.678, 1.734, 2.014, 2.536, 2.834, 2.927};
	unsigned int consume;
	printf("Input monthly electricity you consume: ");
	scanf("%u",&consume);
	if (consume<=50) {
		printf("The amount of money you need to pay: %.3f",consume*arr[0]);
	} else if (consume<=100) {
		printf("The amount of money you need to pay: %.3f",50*arr[0]+(consume-50)*arr[1]);
	} else if (consume<=200) {
		printf("The amount of money you need to pay: %.3f",50*arr[0]+50*arr[1]+(consume-100)*arr[2]);
	} else if (consume<=300) {
		printf("The amount of money you need to pay: %.3f",50*arr[0]+50*arr[1]+100*arr[2]+(consume-200)*arr[3]);
	} else if (consume<=400) {
		printf("The amount of money you need to pay: %.3f",50*arr[0]+50*arr[1]+100*arr[2]+100*arr[3]+(consume-300)*arr[4]);
	} else {
		printf("The amount of money you need to pay: %.3f",50*arr[0]+50*arr[1]+100*arr[2]+100*arr[3]+100*arr[4]+(consume-400)*arr[5]);
	}
	
	return 0;
}
