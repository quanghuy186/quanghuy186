#include <stdio.h>

int main(){
	int n;
	printf("N = ");
	scanf("%d", &n);
	if(n % 4 == 0){
		printf("%d la nam nhuan", n);
	}else{
		printf("%d khong phai la nam nhuan", n);
	}
	
}
