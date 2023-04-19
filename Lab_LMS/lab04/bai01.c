//Viet chuong trinh tinh trung binh cong cua cac so tu nhien chia het cho 2

#include <stdio.h>

int main(){
	unsigned int min,max;
	printf("Input min and max: ");
	scanf("%u %u",&min,&max);
	
	int check = min;
	float div = 0, sum = 0;
	while (check <= max) {
		if (check%2==0) {
			sum+=check;
			div++;
		}
		check++;
	}
	
	printf("Average = %.2f",sum/div);
	
	
	return 0;
}
