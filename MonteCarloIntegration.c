/*Integration of f(x)=x^2 ; for 0≤x≤1 */


#include<stdio.h>
#include<stdlib.h>
#define f(x) x*x

/*
float f(float x)
{ 
    float y,x;
	y=x*x;
	return (y);
}*/

int main()
{
	FILE *fp1;
	int i,count=0,N;
	float r1,r2,x,y,y1,fb=1,area,TA=1.0,a,b;
	N=100;
	a=0.0;
	b=1.0;
	fp1=fopen("MonteCarloOutput.dat","w");
	for(i=0;i<N;i++)
	{
		r1=(rand()%1000)/1000.0;
		r2=(rand()%1000)/1000.0;
		x=a+(b-a)*r1;
		y=fb*r2;
		y1=f(x);
	//	printf("x=%f  y=%f  y1=%f r1=%f r2=%f\n",x,y,y1,r1,r2);
	
	fprintf(fp1,"%f %f\n",x,y);
		if(y<y1)
		{
			count++;
		}
	}
	area=(count*TA)/N;
	printf("area=%f",area);
	return 0;
}

		
