//Viet chuong trinh luu thong tin sinh vien

#include <stdio.h>
#include <string.h>

void infoStu(int num) {
	struct infoStu {
		char id[10], name[50], major[50];
		float aveMark;
	} arrStu[50];
	
	int i;
	char temp[50];
	
	for (i=0;i<num;i++) {
		fflush(stdin);
		printf("Information of student %d\n",i+1);
		printf("ID: ");
		gets(arrStu[i].id);
		printf("Name: ");
		gets(arrStu[i].name);
		printf("Major: ");
		gets(arrStu[i].major);
		printf("Average mark: ");
		scanf("%f",&arrStu[i].aveMark);
		printf("\n");
	}
	
	for (i=0;i<num;i++) {
		printf("\nInformation of student %d\n",i+1);
		printf("ID: %s\n",arrStu[i].id);
		printf("Name: %s\n",arrStu[i].name);
		printf("Major: %s\n",arrStu[i].major);
		printf("Average mark: %.2f\n",arrStu[i].aveMark);
	}
	
}

int main(){
	
	int num;
	printf("Enter the number of student to get info: ");
	scanf("%d",&num);
	
	infoStu(num);

	return 0;
}
