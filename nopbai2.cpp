#include <stdio.h>

int main(){
	int n, A = 0;
	printf("N = ");
	scanf("%d", &n);
	while(n > 1){
		A += (n-1)*n*(n+1);
		n--;
	}
	printf("A = %d", A);
	return 0;
}
