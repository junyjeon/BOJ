#include<stdio.h>
#include<unistd.h>

void    ft_print(char c)
{
    write(1, &c, 1);
}

void    ft_putstr_non_printable(char  *str)
{
    unsigned int    i;
    unsigned char   num1;
    unsigned char   *ustr;
    unsigned char   num2;

	ustr = (unsigned char *)str;

    i = 0;
    while (ustr[i])
    {
        if((32 <= ustr[i] && ustr[i] <= 126)) 
            ft_print(ustr[i]);
        else
        {
            write (1, "\\", 1);
            num1 = "0123456789abcdef"[ustr[i] / 16];
            ft_print(num1);
            num2 = "0123456789abcdef"[ustr[i] % 16];
            ft_print(num2);
        }
        i++;
    }
}

int main()
{
        printf("======ex11======\n");
        char str3[30] = "Coucou\ntu vas├ bien ?";
        ft_putstr_non_printable(str3);
        printf("\n");
    }