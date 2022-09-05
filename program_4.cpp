#include<stdio.h>
#include<math.h>
#define eps 1e-10

int main()
{
	float edgeA, edgeB, edgeC;
	printf("nhap cac canh cua tam giac ");
	printf("nhap canh A,B,C : ");
	scanf("%f%f%f", &edgeA, &edgeB,&edgeC);
	if ( edgeA > 0 && edgeB > 0 && edgeC > 0 && edgeA + edgeB > edgeC &&
	 edgeA + edgeC > edgeB && edgeB + edgeC > edgeA ) 
	{
		unsigned f = 0;
		if ( edgeA == edgeB || edgeB == edgeC || edgeC == edgeA )
		{
			f += 1;
		}
		if ( edgeA == edgeB && edgeB == edgeC ) 
		{
			f += 1;
		}
		if ( fabs( edgeA * edgeA + edgeB * edgeB - edgeC * edgeC ) < eps || 
		fabs( edgeA * edgeA + edgeC * edgeC - edgeB * edgeB ) < eps ||
		fabs( edgeB * edgeB + edgeC * edgeC - edgeA * edgeA ) < eps ) 
		{
			f += 3;
		}
		switch ( f ) 
		{
			case 0: printf( "Tam giac thuong\n" ); break;
			case 1: printf( "Tam giac can\n" ); break;
			case 2: printf( "Tam giac deu\n" ); break;
			case 3: printf( "Tam giac vuong\n" ); break;
			case 4: printf( "Tam giac vuong can\n" );
		}
		double p = ( edgeA + edgeB + edgeC ) / 2;
		printf( "Dien tich S = %g\n", sqrt( p * ( p - edgeA ) * ( p - edgeB ) * ( p - edgeC ) ) );
	}else printf( "Khong hop le\n" );
	return 0;
}
