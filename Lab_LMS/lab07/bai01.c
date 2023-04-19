//Viet chuong trinh dem nguyen am va phu am cua 1 chuoi

#include <stdio.h>
#include <string.h>

void vowConStr() {
	char str[100];
	printf("Enter a string: ");
	gets(str);
	
	int vow=0, con=0, i;
	for (i=0;i<strlen(str);i++) {
		if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='u' || str[i]=='o' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='U' || str[i]=='O') {
			vow++;
		} else if (str[i]!=' '){
			con++;
		}
	}
	
	printf("The number of string's vowel: %d\n",vow);
	printf("The number of string's consonant: %d",con);
}

int main() {
	
	vowConStr();
	
	return 0;
}
