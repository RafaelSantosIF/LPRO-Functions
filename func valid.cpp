#include <stdio.h>
#include <stdlib.h>

int valid(int X){        
	if(X < 0) return 1;
	else return 0;
}
int main(void){
	int x;
	scanf("%d", &x);
	if(valid(x)) printf("Verdadeiro");
	else printf("Falso");
	return 0;
}
