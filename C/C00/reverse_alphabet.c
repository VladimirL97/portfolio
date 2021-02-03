/*Написать вывести на экран обратный алфавит*/
// Работаем так же с таблицей ASCII

#include <unistd.h>

void	putchar(char c)
{
	write(1, &c, 1);
}

void	print_reverse_alphabet(void)
{
	char list;

	list = 'z';
	while (list >= 'a')
	{
		putchar(list);
		list--;
	}
}

int	main(void)
{
	print_reverse_alphabet();
	return (0);
}
