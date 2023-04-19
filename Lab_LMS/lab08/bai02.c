//Viet chuong trinh sap xep sinh vien theo diem tang dan

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

void infoStu_arrangeMark(int num, struct infoStu arrStu[]) {
	int i, j;
	struct infoStu temp;
	
	for (i=0;i<num-1;i++) {
		for (j=i+1;j<num;j++) {
			if (arrStu[i].aveMark>arrStu[j].aveMark) {
				temp = arrStu[i];
				arrStu[i] = arrStu[j];
				arrStu[j] = temp;
			}
		}
	}
	
	for (i=0;i<num;i++) {
		printf("\nInformation of student %d\n",i+1);
		printf("ID: %s\n",arrStu[i].id);
		printf("Name: %s\n",arrStu[i].name);
		printf("Major: %s\n",arrStu[i].major);
		printf("Average mark: %.2f\n",arrStu[i].aveMark);
	}
}


int main() {
	
	int num;
	printf("Enter the number of student to get info: ");
	scanf("%d",&num);
	
	struct infoStu arrStu[50];
	infoStu(num,arrStu);
	infoStu_arrangeMark(num,arrStu);
	
	
	return 0;
}
