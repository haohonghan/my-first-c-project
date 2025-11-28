#include<stdio.h>
void dectobin(int x){
    if(x>1){
    	dectobin(x/2);
	}
	printf("%d",x%2);
	return;
}
int main(){
    int x;
    scanf("%d",&x);
    dectobin(x);
}
