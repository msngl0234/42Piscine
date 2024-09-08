//82

#include <unistd.h>

void	ft_putstr(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

// *str kullanimi ile str[] kullanimi bir nevi ayni islevi goruyor, sence farki ne olabilir ?

int main()
{
	char str[] = "Arda Guler 10";
	ft_putstr(str);
	
	return 0;
}
