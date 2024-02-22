#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{
	int	i;
	int	mult;
	int	nb;

	mult = 1;
	nb = 0;
	i = 0;
	int count = 0;
	while (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
		||str[i] == '\r' || str[i] == '\t' || str[i] == '\v')
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			count++;
			mult *= -1;
		i++;
	}
	if (count >= 2)
	{
	return (0);
	}
	
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	nb *= mult;
	return (nb);
}


int		main(void)
{
	printf("%d\n", ft_atoi("-123456789"));
	printf("%d\n", atoi("-123456789"));
	return (0);
}