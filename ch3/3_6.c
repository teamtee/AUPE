#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <string.h>
int main(){
	int fd;
	char buff[40] = "This is a test msg\n";
	if((fd = open("./test.txt",O_RDWR | O_APPEND)) == -1){
		perror(NULL);
	}
	lseek(fd,0,SEEK_SET);
	write(fd,buff,strlen(buff));
	lseek(fd,2,SEEK_CUR);
	write(fd,buff,strlen(buff));
	
}
