#include <stdio.h>

/*int main(){
	int n = 10;
	while (n--){
		printf("%d",n);
	}
	printf("\n");
}
*/

/*int main() {
	int n = 10;
	while(n>0){
		if(n%3==0){
			printf("%d",n);
			n-=3;
		}
		n--;
	}
}
*/

/*int main() {
	int n;
	for (n=18;n>0;n/=2)
		printf("%3d",n);
}
*/

int main(){
	int i=1;
	int s=1;
	for(;;){
		if(i>5){
			break;
		}
		s+=i;
		i++;
	}
	printf("%d",s);
}
