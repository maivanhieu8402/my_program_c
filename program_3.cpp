#include<stdio.h>
#include<math.h>
int main()
{
	float xc,yc,R,xm,ym,d;
	printf("nhap toa do tam giac C(xc,yc) : ");
	scanf("%f%f",&xc,&yc);fflush(stdin);
	printf("nhap ban kinh R : ");
	scanf("%f",&R);fflush(stdin);
	printf("nhap toa do tam giac M(xm,ym) : ");
	scanf("%f%f",&xm,&ym);fflush(stdin);
	d = R * R - ( ( xm - xc ) * ( xm - xc ) + ( ym - yc ) * ( ym - yc ) );
	if ( d > 0 ) 
	{
		printf( "M nam trong C()\n" );
	}
	else if ( d < 0 ) 
		{
			printf( "M nam ngoai C()\n" );
		}
	else 
	{
		printf( "M nam tren C()\n" );
	}
	return 0;
}
