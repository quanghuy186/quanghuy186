#include <stdio.h>
#include <math.h>

int main(){
	int n;
	float fn;
	printf("N = ");
	scanf("%d", &n);
	while(n > 0){
		fn = sqrt(n+fn);
		n--; 
	}
	printf("F(n) = %0.5f", fn);
	return 0;
}
