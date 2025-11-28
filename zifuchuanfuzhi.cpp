#include<stdio.h>
void strmcpy(char *s,char *t,int m){
	char *v=t+m-1;
	while(*v!='\0'){
		*s=*v;
		v++;
		s++;
	}
	*s='\0';
}
int main(){
     char st[20],tt[20],ch;
     int i=0,m;
     scanf("%c",&ch);
    while(ch!='\n'){
        tt[i++]=ch;
        scanf("%c",&ch);
    }
    tt[i]='\0';
     scanf("%d",&m);
     strmcpy(st,tt,m);
     printf("%s\n",st);
}

