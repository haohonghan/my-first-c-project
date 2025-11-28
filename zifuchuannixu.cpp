#include<stdio.h>
void f(char *p){
	int i=0;
	char *end=p; 
	while(*end!='\0'){
		end++;
		i++;
	}
	int j;
	for(j=0;j<i/2;j++){
		char t=*(p+j);
		*(p+j)=*(p+i-j-1);
		*(p+i-j-1)=t;
	}
}
int main(){
    char st[20];
    scanf("%s",st);
    f(st);
    printf("%s",st);    
}
