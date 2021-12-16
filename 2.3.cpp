#include <stdio.h>

int main(){
	int a, b, c, x;
	printf("A = ");
	scanf("%d", &a);
	printf("B = ");
	scanf("%d", &b);
	printf("C = ");
	scanf("%d", &c);
	if(a > b && b > c){
		x = b;
	}else if(c > b && b >= a){
		x =b;
	}else if(b > a && a >= c){
		x = a;
	}else if(c > a && a >= b){
		x = a;
	}else if(b > c && c >= a){
		x = c;
	}else if(a > c && c >= b){
		x = c;
	}
	 printf("X = %d", x);
	
	return 0;
	}
