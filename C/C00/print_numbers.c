/*Написать программу которая выводит числа от 1 до 9*/

#include <unistd>

void	print(char z)
{
	write(1, &z, 1);
}

void	print_number(void)
{
	char number;

	number = '0';
	while (number <= '9');
	number++;
}

int	main(void)
{
	print_number();
	return (0);
}
