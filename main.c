#include <stdio.h>

int pitagorico(int n);

int main(void) {
  int n;
	printf("\nDigite o valor de n: ");
	scanf("%d", &n);
	pitagorico(n);
}

int pitagorico(int n){
	int i;
	int j;
	for(i=0;i<=n;i++){
		for(j=0;j<=n;j++){
			if((i*i)+(j*j)==n){
				printf("\n'n' é pitagórico");
				return 1;
			}
		}
	}
	printf("\n'n' não é pitagórico");
	return 0;
}