#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>

char buf[]={"write to stdout\n"};


int main(int argc,char* argv[])
{
	pid_t id;
	
	if(write(STDOUT_FILENO,buf,sizeof(buf)-1)!=sizeof(buf)-1)
		perror("can't write");
	printf("printf\n");
	printf("printf ");//注意这里我们把换行符\n替换为一个空格
	id=fork();
	if(id<0)
		perror("fork error");


	exit(0);	


	//setvbuf(stdout,NULL,_IONBF,0);	
	//printf("hello");
	//while(1);
	//fclose(stdout);
}
