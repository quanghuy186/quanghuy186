#include <stdio.h>
#include <math.h>

int main(){
	int x, s = 0;
	printf("Nhap x = ");
	scanf("%d", &x);
	if(x == 3){
		printf("Bieu thuc khong xac dinh");
	}else{
		s = (1+sqrt(x))/(x-3);
		printf("Ket qua: %d", s);
	}
	
	
	
	return 0;
}
