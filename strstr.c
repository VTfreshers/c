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

int main(int argc,char *argv[])
{
	if(argc<3)
		printf("pattern is <./a.out str1 str2>");
	else
	{
		char *temp=rev(argv[2]),*p;
		while(p=strstr(argv[1],argv[2]))
		{
			printf("found at %ld\n",p-argv[1]);
			memmove(p,temp,strlen(temp));
			p++;
		}
	}
	printf("%s\n",argv[1]);
	return 0;
}
