#include<stdio.h>
int main()
{
	int n,i;
	char q;
	scanf("%c %d",&q,&n);
	getchar();
	char gird[n][n];
	for(i=0;i<n;i++){
		gets(gird[i]);
	}
    
	int same=1,j;
	//�ж��Ƿ�Ҫ�� 
	for(i=n-1;i>=0;i--){
		for(j=n-1;j>=0;j--){
			if(gird[n-1-i][n-1-j]!=gird[i][j]){
				same=0;	
				break;
			} 
		}
	}
	if(same==1){
		printf("bu yong dao le\n");
	}
	int cnt=0;
	for(i=n-1;i>=0;i--){
		for(j=n-1;j>=0;j--){
			//������ǿո�������ַ�
			if(gird[i][j]!=' '){
				gird[i][j]=q;
			} 
			printf("%c",gird[i][j]);
			cnt++;
			if(cnt==n){
				cnt=0;
				printf("\n");
			}
		}
	}
	return 0;
}

