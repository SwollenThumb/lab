#include "my.h"

int main()
{
	FILE* fp;
	char buf[]="hello world";
	if((fp=fopen("test.txt","w"))==NULL)
	{
		perror("fail to fopen");
		return -1;	
	}
	if(fputs(buf,fp)==EOF)
	{
		perror("fail to fputs");
		return -1;
	}
	_exit(0);

}
