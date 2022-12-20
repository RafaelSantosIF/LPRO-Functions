#include <stdio.h>
#include <stdlib.h>

int fatorial(int X){
	int fat = 1;
	for(int i=X; i>1; i--){
		fat = fat*i;
	}
	return fat;
}
int main(void){
	int x;
	scanf("%d", &x);
	printf("Fatorial = %d", fatorial(x));
	return 0;
}
