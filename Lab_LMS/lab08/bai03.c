//Viet chuong trinh tim kiem sinh vien

#include <stdio.h>
#include <string.h>

struct infoStu {
	char id[10], name[50], major[50];
	float aveMark;
};

void infoStu(int num, struct infoStu arrStu[]) {
	int i;
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
}

void infoStu_search(int num, struct infoStu arrStu[]) {
	int i;
	char idSearch[10];
	printf("\nID search: ");
	scanf("%s",&idSearch);
	
	for (i=0;i<num;i++) {
		if (strcmp(idSearch,arrStu[i].id)==0) {
			printf("\nInformation of student %d\n",i+1);
			printf("ID: %s\n",arrStu[i].id);
			printf("Name: %s\n",arrStu[i].name);
			printf("Major: %s\n",arrStu[i].major);
			printf("Average mark: %.2f\n",arrStu[i].aveMark);
		}
	}
}

int main() {
	struct infoStu arrStu[50];
	
	int num;
	printf("Enter the number of student to get info: ");
	scanf("%d",&num);
	
	infoStu(num,arrStu);
	infoStu_search(num,arrStu);
	
	return 0;
}
