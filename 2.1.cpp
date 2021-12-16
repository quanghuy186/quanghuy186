#include <stdio.h>

int main(){
	int a, b, c, y = 0;
	printf("Nhap a = ");
	scanf("%d", &a);
	printf("Nhap b = ");
	scanf("%d", &b);
	printf("Nhap c = ");
	scanf("%d", &c);
	if(b <= c){
		y = (a*a + 3*a - 1);
	}
	if(b > c){
		y = 0;
	}
	printf("Y = %d", y);
	
	return 0;
}
