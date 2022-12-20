#include <stdio.h>
#include <stdlib.h>

int soma(int A, int B){        
	return A+B;
}
int main(void){
	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	printf("Soma = %d", soma(a, b));
	return 0;
}
