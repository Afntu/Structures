#include<stdio.h>
struct complex 
{
	float x;
	float y;
};
typedef struct complex cnum;

cnum csum(cnum *num)
{
	cnum sum;
	sum.x = (num[0].x + num[1].x);
	sum.y = (num[0].y + num[1].y);
	return sum;
}

cnum cmul(cnum *num)
{
	cnum mul;
	mul.x = (num[0].x * num[1].x) - (num[0].y * num[1].y);
	mul.y = (num[0].y * num[1].x) + (num[0].x * num[1].y);
	return mul;
}
int main() 
{
	cnum num[2],sum,mul;
	int i;
	for(i = 0;i < 2;i++)
	{
		printf("Enter the real part of the %dth complex number ... \n",i+1);
		scanf("%f",&num[i].x);
		printf("Enter the imaginary part of the %dth complex number ... \n",i+1);
		scanf("%f",&num[i].y);
	}	
	for(i = 0;i < 2;i++)
	{
		printf("z[%d] = (%f + i %f)\n",i+1,num[i].x,num[i].y);
	}	
	sum= csum(&num[0]);
	printf("sum of this two complex numbers is = %f + i %f\n",sum.x,sum.y);
	mul = cmul(&num[0]);
	printf("Multiplication of this two complex numbers is = (%f + i %f)\n",mul.x,mul.y);
	return 0;
}	
