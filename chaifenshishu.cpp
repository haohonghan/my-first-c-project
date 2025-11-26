#include<stdio.h>
#include<stdlib.h>
void splitFloat(float x,int *intpart,float *fracpart){
	int i=0;
	float t=x;
	while(x>1){
		x=x-1;
		i++;
	}
	*intpart=i;
	if(x==1){
		*fracpart=0.0;
	}else{
		*fracpart=t-i;
	}
}
int main(){
    float x,fp;
    int ip;
    scanf("%f",&x);
    splitFloat(x,&ip,&fp);
    printf("The intpart is %d\n",ip);
    printf("The fracpart is %f\n",fp);
}

