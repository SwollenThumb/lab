#include "my.h"

#define BUF_4K 4*1024
#define BUF_8K 8*1024
#define BUF_12K 12*1024

int main()
{
	char a[BUF_4K];
	char b[BUF_8K];
	char c[BUF_12K];
	memset(a,'A',sizeof(a));
	memset(b,'B',sizeof(b));
	memset(c,'C',sizeof(c));
	int fd[2];
	int ret=pipe(fd);
	
	if(ret==-1)//failure
	{
		fprintf(stderr,"create pipe error (%s)\n",strerror(errno));
		exit(-1);
	}
	
	pid_t pid;
	pid=fork();
	if(pid==-1)
	{
		fprintf(stderr,"first fork error (%s)\n",strerror(errno));		
		exit(-2);
	}
	else if(pid==0)
	{
		close(fd[0]);
		int loop=0;
		while(loop++<10){
			ret=write(fd[1],a,sizeof(a));
			printf("[child]")

		}

	}
















	return 0;		
}
