/* Напишите программу которая напишет все комбинации 3х значных чисел без повторов */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	coma_space(void)
{
	print(',');
	print(' ');
}

void	print_combination(void)
{
	int num[3];

	num[0] = '0';
	while (num[0] <= '9')
	{
		num[1] = '0';
		while (num[1] <= '9')
		{
			num[2] = '0';
			while (num[1] <= '9')
			{
				if (num[0] < num[1] && num[1] < num[2])
				{
					print(num[0]);
					print(num[1]);
					print(num[2]);
					if (!(num[0] == '7' && num[1] == '8' && num[2] == '9'))
						coma_space();
				}
				num[2]++;
			}
			num[1]++;
		}
		num[0]++;
	}
}

int	main(void)
{
	print_combination();
	return (0);
}
