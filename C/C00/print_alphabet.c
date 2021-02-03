/*Напишите программу которая выводит алфавит*/

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

/* работаем с таблицей ASCII */

void	ft_print_alphabet(void)
{
	char list;

	letter = 'a';
	while (letter <= 'z')
	{
		putchar(list);
		list++;
	}
}

int	main(void)
{
	ft_frint_alphabet();
	return (0);
}
