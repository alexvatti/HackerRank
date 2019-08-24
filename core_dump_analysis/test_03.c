/*
problem: core dump analysis
*/

#include<stdio.h> 
#include<malloc.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<string.h>
int main(void) 
{ 
   char buffer[40]="welcome to hello world"; 
   int fd;
	fd=fd/0;
	fd=open("/dev/sample_chrdev",O_RDWR);
	write(fd,buffer,strlen(buffer));
	read(fd,buffer,strlen(buffer));
	close(fd);
	return 0; 
}     


