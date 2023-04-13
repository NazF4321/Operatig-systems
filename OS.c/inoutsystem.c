#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<fcnt1.h>
int main(void)
{
	int fd[2];
	char buf1[12]="hello world";
	char buf2[12];
	fd[0]=open("foobar.txt",o_RDWR);
	fd[1]=open("foobar.txt",o_RDWR);
	Write(fd[0],buf1,strlen(buf1));
	write(1,buf2,read(fd[1],buf[2],12));
	close(fd[0]);
	close(fd[1]);
	return 0;
}
