//Viet chuong trinh tim chu Hoa va chuyen thanh chu thuong

#include <stdio.h>
#include <string.h>

void lowerStr() {
	char str[50];
	int i;
	
	printf("Enter a string: ");
	gets(str);
	
	for (i=0;i<strlen(str);i++) {
		if (isupper(str[i])) {
			str[i] = tolower(str[i]);
		}
	}
	
	printf("%s",str);
}

int main() {
	
	lowerStr();

	return 0;
}



