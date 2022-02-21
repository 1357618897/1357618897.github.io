#include<stdio.h>
#include<math.h>
int main(){
	int L,N,y;
	int i,x;
	scanf("%d",&L);
	scanf("%d",&N);
	N=N-1; 
	for(i=1;i<=L;i++){
		y=N/(pow(26,L-i));
		printf("%c",'z'-y);
		x=pow(26,L-i);
		N=N%x;
	}
	return 0;
} 

