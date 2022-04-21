#include<stdio.h>
#include<math.h>

struct coordinate 
{
	int x;
	int y;
};

typedef struct coordinate Coordinate;
int main() 
{
	Coordinate point[3];
	int i;
	for(i = 0;i < 3;i++)
	{
		printf("Enter the first coordinate of the %dth point \n",i+1);
		scanf("%d",&point[i].x);
		printf("Enter the second coordinate of the %dth point \n",i+1);
		scanf("%d",&point[i].y);
	}	
	for(i = 0;i < 3;i++)
	{
		printf("(x1,y1) = (%d,%d)\n",point[i].x,point[i].y);
	}	
	float a,b,c,s,area;
	a = sqrt(pow((point[1].x - point[0].x),2) + pow((point[1].y - point[0].y),2));
	b = sqrt(pow((point[2].x - point[1].x),2) + pow((point[2].y - point[1].y),2));
	c = sqrt(pow((point[2].x - point[0].x),2) + pow((point[2].y - point[0].y),2));
	s = (a+b+c)/2;
	printf("a = %f\n",a);
	printf("b = %f\n",b);
	printf("c = %f\n",c);
	printf("s = %f\n",s);
	area = sqrt( s*(s-a)*(s-b)*(s-c));
	printf("area of the triangle is = %f\n",area);
	return 0;
}	
