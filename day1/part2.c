#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main()
{
    FILE    *fd = fopen("input.txt", "r");
    char    *line_buff = 0;
    size_t  line_size_buff = 0;
    ssize_t  line_size;
    int     a = 0;
    int     b = 0;
    int     treecount = 1;
    int     count = 0;

    if (!fd)
    {
        printf("Error opening file");
        return (0);
    }
    line_size = getline(&line_buff, &line_size_buff, fd);
    while (line_size >= 0)
    {
        a = b;
        b = 0;
        if (a == 0)
        {
            treecount = 1;
            while (line_size >= 0 && treecount <= 3)
            {
                a += atoi(line_buff);
                line_size = getline(&line_buff, &line_size_buff, fd);
                treecount++;
            }
        }
        treecount = 1;
        while (line_size >= 0 && treecount <= 3)
        {
            b += atoi(line_buff);
            line_size = getline(&line_buff, &line_size_buff, fd);
            treecount++;
        }
        if (a < b)
            count++;
    }
    printf("%d", count);
}