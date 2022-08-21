#include<stdio.h>
#include<math.h>
int main()
{
	float xa,ya,xb,yb;
	printf("nhap toa do diem a(xa,ya) : ");
	scanf("%f%f", &xa, &ya);
	printf("nhap toa do diem b(xb,yb) : ");fflush(stdin);
	scanf("%f%f", &xb, &yb);
	printf("|AB| = %g", sqrt((xb - xa) * (xb - xa) + (yb - ya)*(yb - ya)));
}
