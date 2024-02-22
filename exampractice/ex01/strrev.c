char *ft_strrev(char *str)
{
        int len ;
        int i;
        int temp;
        len = 0;
        i = 0;

        while (str[i]!= '\0')
        {
                len++;
        }
        while (len > i)
        {
        temp=str[len];
        str[len]= str[i];
        str[i]=temp;
        len--;
        i++;
        }
		return (str);
}