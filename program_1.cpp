//tính chu vi hình cầu khi biết diện tích của nó. biết pi = 3.141593
#include<stdio.h>
#include<math.h>
#define pi 3.141593
int main()
{
	float s;
	printf("nhap dien tich s: ");
	scanf("%f", &s);
	float r = sqrt(s/(4*pi));
	printf("the tich V: %f",(4/3*1.0)*pi*pow(r,3));
}
