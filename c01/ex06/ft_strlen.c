//66

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}

	return i;
}

// Mainde return yazmasak calisir mi ? Eger calisirsa neden return yaziyoruz? Calismiyorsa sence neden calismiyor?
#include <stdio.h>

int main()
{
	char str[] = "Bright Osayi-Samuel";
	printf("Dizi uzunlugu :%d ", ft_strlen(str));

	
	return 0;
}
