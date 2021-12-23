#include <iostream>

void	strupper(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		std::cout << (char)toupper(str[i]);
		i++;
	}
}

int main(int ac, char *av[])
{
	int	i;

	if (ac > 1)
	{
		i = 1;
		while (i < ac)
		{
			strupper(av[i++]);
			if (i != ac)
				std::cout << " ";
		}
	}
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}