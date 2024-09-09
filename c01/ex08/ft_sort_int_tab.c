//72 67 69

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	i = 0;

	int y;
	while(size >= 0)
	{
		i = 0;
		while(i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				y = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = y;
			}
			i++;
		}
		size--;
	}
}

#include <stdio.h>

int main()
{
	int tab[] = {4,3,6,5,1};
	ft_sort_int_tab(tab, 5);
	int i = 0;
	while (tab[i])
	{
		printf("%d ", tab[i]);
		i++;
	}
}
