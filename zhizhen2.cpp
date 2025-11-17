#include<stdio.h>
int main(){
	int a[1000];
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int s=sizeof(a)/sizeof(a[0]);
	int sum=0;
	int *p=a;
	for(i=0;i<n;i++){
		printf("%d ",*p);
		sum=sum+*p;
		p++;
	}
	printf("\n");
	printf("%d",sum);
	return 0;
}
