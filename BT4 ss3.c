#include<stdio.h>
int main(){
	int a, b, c, max, min;
	printf("Nhap so thu nhat: ");
	scanf("%d", &a);
	printf("Nhap so thu hai: ");
	scanf("%d", &b);
	printf("Nhap so thu ba: ");
	scanf("%d", &c);
	max = a;
	if (b > max){
		max = b;
	}
	if (c > max){
		max = c;
	}
	min = a;
	if (b < min){
		min = b;
	}
	if (c < min){
		min = c;
	}
	printf("So nguyen lon nhat la: %d\n", max);
	printf("So nguyen nho nhat la: %d\n", min);
	return 0;
}
