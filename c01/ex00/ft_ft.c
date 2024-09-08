void	ft_ft(int *nbr)
{
	*nbr = 42;	
}

#include <stdio.h>

int main()
{
	int i=10;
	ft_ft(&i);
	printf("%d ", i);
}
