#include <stdio.h>
#include "get_next_line.h"
#include <fcntl.h>

int main(int argc, char **argv)
{
    int fd;
    char    *tmp;
    fd = open("text.txt", O_RDONLY);
    
    tmp = get_next_line(fd);

    while(tmp)
    {
        printf("%s", tmp);
        tmp = get_next_line(fd);
    }

//./a.out & leaks a.out
    //system("leaks a.out > leaks_result_temp; cat leaks_result_temp | grep leaked && rm - rf leaks_result_temp");
} 