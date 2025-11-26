#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	char s[10000];
	char c[10000];
	fgets(s,sizeof(s),stdin);
	fgets(c,sizeof(c),stdin);
	s[strcspn(s,"\n")]='\0';
	c[strcspn(c,"\n")]='\0';
} 
