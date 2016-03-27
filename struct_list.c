#include <stdio.h>
struct tt
{
	int x;
	struct *y;
}*p;
struct tt a[4]={20,a+1,15,a+2,30,a+3,17,a};

main()
{
	int i;
	p = a;
	for(i=1 ; i<=2 ; i++)
	{
		printf("%d,",p->x);
		p = p->y;
	}
	printf("\n");
}
