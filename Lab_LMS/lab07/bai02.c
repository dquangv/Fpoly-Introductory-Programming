//Viet chuong trinh dang nhap bang username va password

#include <stdio.h>
#include <string.h>

void checkAccount(char user_sys[], int pass_sys) {
	char user_name[20];
	int pass_name;
	printf("Enter your username: ");
	gets(user_name);
	printf("Enter your password: ");
	scanf("%d",&pass_name);
	
	if (strcmp(strlwr(user_name),user_sys)==0 && pass_name==pass_sys) {
		printf("Logged in successfully.");
	} else {
		printf("Logged in failed.");
	}
}

int main() {
	
	char user_sys[]="admin";
	int pass_sys=12345;
	
	checkAccount(user_sys,pass_sys);

	return 0;
}
