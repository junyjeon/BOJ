#include <limits.h> /* PATH_MAX = 4096 */
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char buf[PATH_MAX]; 
    char *res = realpath(".", buf);
    if (res) 
    {
        printf("%s\n", buf);
    } else
    {
        perror("realpath");
        exit(1);
    }

    return 0;
}