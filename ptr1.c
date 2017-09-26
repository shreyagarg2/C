/*#include<stdio.h>
int main()
{
	int a[3][3],i,j;
	int (*p)[3];
	p=a;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			scanf("%d",(*(p+i)+j));
		}
	}
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",*(*(p+i)+j));
		}
		printf("\n");
	}
	return 0;
}*/


/*#include<stdio.h>
void main()

{
	int a[3],i;
	int *p;
	p=a;

	for(i=0;i<3;i++)
{
	scanf("%d",(p+i));
}
	display(a);
}
void display(int *p)
{

int i;

for(i=0;i<3;i++)
{
	printf("%d\n",*(p+i));
}
}*/


#include<stdio.h>
int display(int , int);
int main()

