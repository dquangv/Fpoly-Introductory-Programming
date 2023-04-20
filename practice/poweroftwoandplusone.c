#include <stdio.h>

void printPowerOfTwoAndPlusOne(int n) {
    printf("%d = ", n);
    
    int plus = 0, multi = 0, n2 = n;

    while (n > 1) {
        if (n % 2 == 0) { 
            n /= 2;
            multi++;
        } else {
            n += 1;
            plus++;
        }
    }

	int arr[multi+plus];
	int i;
	
	for (i = 0; i < multi + plus ; i++) {
		printf("(");
	}
	
    printf("1");
    
    while (n2 > 1) {
        if (n2 % 2 == 0) { 
            n2 /= 2;
            printf(" * 2)");
        } else {
            n2 += 1;
            printf(" + 1)");
        }
    }

}

int main() {
    int n;

    printf("number: ");
    scanf("%d", &n);

    printPowerOfTwoAndPlusOne(n);

    return 0;
}

