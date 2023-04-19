#include <stdio.h>

int main(){
	int i=1,tong;
	printf("%d\n",tong);
	while(tong<5){
		tong += i;
		i++;
		printf("%d\n",tong);
	}
	printf("%d",tong);
}
