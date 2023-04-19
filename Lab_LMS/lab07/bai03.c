//Viet chuong trinh sap xep chuoi theo chu cai

#include <stdio.h>
#include <string.h>

void arrangeStr(char str[][30], int num) {
	int i,j;
	char temp[30];
	
	for (i=0;i<num;i++) {
		printf("Nhap chuoi so %d: ",i+1);
		gets(str[i]);
	}
	
	for (i=0;i<num-1;i++) {
		for (j=i+1;j<num;j++) {
			if ((int)str[i][0]>(int)str[j][0]) {
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}
	
	for (i=0;i<num;i++) {
		printf("%s\n",str[i]);
	}
}

int main() {
	
	int num;
	printf("Enter the number of string: ");
	scanf("%d",&num);
	
	fflush(stdin);
	char str[num][30];
	
	arrangeStr(str,num);
	
	return 0;
}
