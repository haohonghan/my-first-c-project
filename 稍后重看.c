#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	char s[10000];
	char c[10000];
	fgets(s,sizeof(s),stdin);
	fgets(c,sizeof(c),stdin);
	s[strcspn(s,"\n")]='\0';
	c[strcspn(c,"\n")]='\0';
	int ls=strlen(s);
	int lc=strlen(c);
	if(lc==0){
		printf("%s\n",s);
		return 0;
	}
	char r[10000];
	char* out = r;
	const char*current=s;
	const char *found;
	while((found=strstr(current,c))!=NULL){
		int copy=found-current;
		strncpy(out,current,copy);
		out=out+copy;
		current=found+lc;
	}
	strcpy(out,current);
	printf("%s\n",r);
}
