#include <unistd.h>
#include <stdio.h>
int mydup2(int fd,int fd2);
int main(){
	int fd = mydup2(1,14);
	printf("get fd:%d\n",fd);
}

int mydup2(int fd,int fd2){
	if(fd == fd2){
		return fd;
	}
	close(fd2);
	int tempfdlist[fd2];
	int tempfdlen = 0;
	int tempfd = dup(fd);
	while( tempfd != -1 && tempfd != fd2){
		tempfdlist[tempfdlen++] = tempfd;
		tempfd = dup(fd);
	}
	for(int i = 0;i<tempfdlen;i++){
		close(tempfdlist[i]);
	}
	return tempfd;
}
