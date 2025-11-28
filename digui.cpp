#include<stdio.h>
double fact(int i){
	int j;
	double t=1.0;
	for(j=1;j<=i;j++){
		t=t*j;
	}
	return t;
}
int main(){
    int i,n;
    double sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        sum=sum+fact(i);
    printf("%.0lf",sum);    
}
