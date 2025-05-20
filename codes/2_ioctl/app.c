#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/ioctl.h>

int main() 
{
    int fd = open("/dev/nobrand", O_RDWR);
    if (fd < 0) printf("ERROR\n");

    printf("GO\n");

    //ioctl
    ioctl(fd, _IO(0, 3), 0);
    ioctl(fd, _IO(0, 4), 0);
    ioctl(fd, _IO(0, 5), 0);

    close(fd);

    return 0;
}
