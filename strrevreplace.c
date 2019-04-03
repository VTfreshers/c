#include<stdio.h>
#include<string.h>

char *rev(char *ptr)
{
	static char rev[20];
	static int i;
	int len=strlen(ptr),cnt;
	if(i>0) return rev;
	for(cnt=len,i=0;cnt--;i++)
		rev[len-i-1]=ptr[i];
	rev[i]=0;
	return rev;
}

int main()
{
	char str[20],buf[10];
	printf("enter the string:");
	scanf("%s",str);
	printf("enter string to be replaced:");
	scanf("%s",buf);
	char *temp=rev(buf),*p;
	while(p=strstr(str,buf))
	{
		printf("found at %ld\n",p-str);
		memmove(p,temp,strlen(temp));
		p++;
	}
	printf("%s\n",str);
	return 0;
}
