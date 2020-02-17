#include<stdio.h>
int main () {
	int a[100], b[100];
	int i, p, all, sea, flag;
	
	printf("Input : ");
	scanf("%d", &all);
	printf("data: ");
	for (i = 0; i < all; i++) {
		scanf("%d", &a[i]);
	}
	printf("Input :");
    scanf("%d", &sea);	  
    printf("data: ");
	for (p = 0; p < sea; p++) {
		scanf("%d", &b[p]);
	}
	
	
	p = 0;  
	do {
		for (i = 0; i < all; i++) {
			if (b[p] == a[i]) {
				flag = 1;
				
				break;
			} else {
				flag = 0;
			}
		}
		
	
		if (flag == 1) {
			printf("Ditemukan\n");
		} else {
			printf("Tidak Ditemukan\n");
		}
		p++;
	} while (p < sea);

	return 0;
}
