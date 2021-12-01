#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main()
{
    FILE    *fd = fopen("input.txt", "r");
    char    *line_buff = 0;
    size_t  line_size_buff = 0;
    ssize_t  line_size;
    int     nb = 0;
    int     count = 0;


    if (!fd)
    {
        printf("Error opening file");
        return (0);
    }
    line_size = getline(&line_buff, &line_size_buff, fd);
    while (line_size >= 0)
    {
        nb = atoi(line_buff);
        line_size = getline(&line_buff, &line_size_buff, fd);
        if (line_size >= 0)
            if (nb <= atoi(line_buff))
                count++;
    }
    printf("%d", count);
}