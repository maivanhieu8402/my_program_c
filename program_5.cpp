#include<stdio.h>
void swaps(int *replaceA, int *replaceB, int *replaceD)
{
	*replaceD = *replaceA;
	*replaceA = *replaceB;
	*replaceB = *replaceD;
}
int main()
{
	int integerA, integerB, integerC, integerD;
	printf("nhap so nguyen a,b,c : ");
	scanf("%d%d%d", &integerA, &integerB, &integerC);
	if ( integerA < integerB ) 
	{
		swaps(&integerA, &integerB, &integerD);
	}
	if(integerA < integerC)
	{
		swaps(&integerA, &integerC, &integerD);
	}
	if(integerB < integerC)
	{
		swaps(&integerB, &integerC, &integerD);
	}
	printf( "Tang dan: %d %d %d\n", integerC, integerB, integerA );
	return 0;
}
