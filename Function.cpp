#include <stdio.h>
#include <stdlib.h>

void hashtag(char C, int H){
	for(int i=1; i <= 9; i++){
		if(i == 5){
			for(int x=1; x <= H; x++){
				printf("%c", C);	
			}
		} else if ((i==4) || (i==6)) {
			for(int x=1; x <= (H-1); x++){
				printf("%c", C);	
			}
		} else if ((i==3) || (i==7)) {
			for(int x=1; x <= (H-2); x++){
				printf("%c", C);	
			}
		} else if ((i==2) || (i==8)) {
			for(int x=1; x <= (H-3); x++){
				printf("%c", C);	
			}
		} else if ((i==1) || (i==9)) {
			for(int x=1; x <= (H-4); x++){
				printf("%c", C);	
			}
		}
		printf("\n");
	}
	printf("\n");
}

int main(void){
	char ch;
	int n, a;
	
	printf("Tag: ");
	scanf("%c", &ch);
	printf("Quant: ");
	scanf("%d", &n);
	system("cls");
	
	for(int i=1; i<=n; i++){
		printf("\nAndares: ");
		scanf("%d", &a);
		hashtag(ch, a);
	}

	return 0;
}
