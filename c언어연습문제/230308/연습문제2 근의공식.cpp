#include<stdio.h>
#include<math.h> 
int main()
{
	double numb1, numb2, numb3;
	double root1, root2;
	
	printf("a,b,c를 입력하시오:");
	scanf("%lf %lf %lf", &numb1, &numb2, &numb3);
	
	root1=(-numb2+sqrt(numb2*numb2-4*numb1*numb3))/(2*numb1);
	root2=(-numb2-sqrt(numb2*numb2-4*numb1*numb3))/(2*numb1);
	
	
	if(numb1!=0)
	{
		if(numb2*numb2-4*numb1*numb3>0)			//근두개 
		{
		printf("%.2lf, %.2lf", root1, root2);
		}
		else if(numb2*numb2-4*numb1*numb3==0)	//근한개 
		{
		printf("%.2lf", root1);
		}
		else if(numb2*numb2-4*numb1*numb3<0)	//근없음  
		{
		printf("none"); 
		}
	
	}
	
	else
	printf("none");
	
	return 0;
}
