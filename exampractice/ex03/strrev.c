#include <unistd.h>
void putchar (char str)
{
write(1,&str,1);
}

void putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        putchar(str[i]);
        i++;
    }
}

char *ft_strrev(char *str)
{
    int len = 0;
    int i = 0;
    char temp;

    while (str[i] != '\0')
    {
        len++;
        i++;
    }

    i = 0;
    while (len > i)
    {
        len--;
        temp = str[len];
        str[len] = str[i];
        str[i] = temp;
        i++;
    }

    return str;
}

int main(int argc, char *argv[])
{
    int i = 1;
    while (i < argc)
    {
        ft_strrev(argv[i]);
        putstr(argv[i]); 
        putchar('\n');
        i++;
    }

    return 0;
}
