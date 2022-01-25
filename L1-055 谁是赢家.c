#include<stdio.h>
int main(void)
{
	int Pa,Pb,a1,b1,x1,x2,x3;
	scanf("%d %d",&Pa,&Pb);
	scanf("%d %d %d",&x1,&x2,&x3);
	a1=x1+x2+x3;
	b1=3-a1;
	if((Pa>Pb&&b1>=1)||(Pa<Pb&&b1==3)){
		printf("The winner is a: %d + %d",Pa,b1);
	}
	else{
		printf("The winner is b: %d + %d",Pb,a1);
	}
	return 0;
}

