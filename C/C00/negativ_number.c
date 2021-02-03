/* Написать программу которрая выводит 'P' или 'N' в зависимости от заданного числа*/

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	negative(int number)
{
	if (number < 0)
		print('N');
	else
		print('P');
}

int	main(void)
{
	negative(-1);
	print('\n');
	negative(1);
	return (0);
}
