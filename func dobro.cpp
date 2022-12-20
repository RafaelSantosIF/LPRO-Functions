#include <stdio.h>
#include <stdlib.h>

int dobro(int N){
	return (2*N);
}

int main(void){
	int n;
	printf("Numero: ");
	scanf("%d", &n);
	printf("Dobro: %d", dobro(n));
	
	return 0;
}
