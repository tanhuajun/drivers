#include<fcntl.h>
#include<stdio.h>
#include<string.h>
#include<sys/select.h>
#include<unistd.h>

#define DATA_NUM (64)
int main(int argc, char* argv[])
{
		int fd, i;
		int r_len, w_len;
		fd_set fdset;
		char buf[DATA_NUM] = "hello world";
		memset(buf, 0, DATA_NUM);
		fd = open("/dev/hello", O_RDWR);
		printf("%d\n\r", fd);
		if(fd == -1){
			perror("open file error\n\r");
			return -1;
		}
		else{
			printf("open successe\n\r");
		}

		w_len = write(fd, buf, DATA_NUM);
		r_len = read(fd, buf, DATA_NUM);
		printf("%d %d\r\n", w_len, r_len);
		printf("%s\n\r", buf);

		return 0;
}
