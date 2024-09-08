// Burada pointer tanimlayicisi olan * isaretlerini kaldirdigimizda sizce degisiklik saglanir mi?
// Cevabin evetse dene ve degisip degismedigini gor.
// Cevabin yanlis ciktiysa sebebin ogren.

void	ft_swap(int *a, int *b)
{
	int temp;
	
	temp = *a;
	*a = *b;
	*b = temp;
}

#include <stdio.h>

int main()
{
	int x =10;
	int y= 15;
	
	printf("x : %d , y : %d\n", x, y);
	ft_swap(&x, &y);
	printf("x : %d , y : %d\n", x, y);
}
