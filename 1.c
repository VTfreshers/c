#include<stdio.h>
#include<stdlib.h>

char* getstring()
{
int i=0;
char *q=0;
do
{
q=realloc(q,i+1);
q[i]=getchar();
}while(q[i++]!=10);
q[i]=0;
return q;
}

int main()
{
char *str;
printf("enter a sentence:");
str=getstring();
printf("the string is %s\n",str);
return(0);
}
