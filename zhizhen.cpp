#include<stdio.h>
void cheng(int *a,int *b){
	int t=*a;
	*a=*b;
	*b=t;
}
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	cheng(&a,&b);
	printf("%d %d",a,b);
	return 0;
}
