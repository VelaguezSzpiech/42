#include<unistd.h>

void rot13(char *str){
        int i ;
        i= 0;
        while (str[i] != '\0')
        {
               if ((str[i] >= 'A' && str[i]<='M')|| (str[i] >= 'a' && str[i]<='m'))
               {
               str[i] += 13;
               }else if((str[i] >= 'N' && str[i]<='Z')|| (str[i] >= 'n' && str[i]<='Z'))
               {
                str[i] -= 13;
               }
               write(1,&str[i],1);
               i++;
        }
               write (1," ",1);
        

}
int main(int ac,char **av)
{
        int i ;
        i= 1;
while (i < ac){
        rot13(av[1]);
        i++;
}
write (1,"\n",1);
}