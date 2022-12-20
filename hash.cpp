#include <stdio.h>
#include <stdlib.h>

#define C '0'

int main(){
	for(int i=1; i <= 13; i++){
		if((i == 3) || (i == 4) || (i == 10) || (i == 11)){
			printf(" %c %c %c %c %c %c\n", C, C, C, C, C, C);
		} else if (i == 7){
			printf("\n");
		} else {
			printf(" %c %c %c %c\n", C, C, C, C);
		}
	}
	
	return 0;
}
