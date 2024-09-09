//65

void	ft_rev_int_tab(int *tab, int size)
{
	int i;
	int y;
	i = 0;
	while(i < size / 2)
	{
		y = tab[i];
		tab[i] = tab[size - 1 -i];
		tab[size - 1 - i] = y;
		i++;	
	}
}
//String bir dizi tanimlarken uzunluk belirtmemiz gerekmiyor fakat int bir dizi icin uzunluk belirtiyoruz bunun sebebi ne olabilir ?


#include <stdio.h>
int main()
{
	int tab[] = {1, 5, 3, 7, 8};
	ft_rev_int_tab(tab, 5);
	
	int i = 0;
	while (tab[i])
	{
		printf("%d ", tab[i]);
		i++;
	}
}
