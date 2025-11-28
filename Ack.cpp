#include<stdio.h>
int t;
int Ack(int m,int n);
int main(){
	int n,m;
	scanf("%d %d",&m,&n);
	printf("Ack(%d,%d)=%d",m,n,Ack(m,n));
	return 0;
}
int Ack(int m,int n){
	if(m==0)t=n+1;
	else{
		if(n==0)t=Ack(m-1,1);
		else{
			t=Ack(m-1,Ack(m,n-1));
		}
	}
	return t;
}
