#include<stdio.h>
void posi(int n){
	if(n<10){
		printf("%d ",n);
	}
	else{
		posi(n/10);
		printf("%d ",n%10);
	}
}
void nega(int n){
	printf("%d",n%10);
	if(n>=10){
		printf(" ");
	}
	if(n>=10){
		nega(n/10);
	}
	
}
int main(){
    int x;
    scanf("%d",&x);
    posi(x);
    printf("\n");
    nega(x);
}

