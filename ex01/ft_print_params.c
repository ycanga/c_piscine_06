#include<unistd.h>

int	main(int argc, char **argv)
{
	int	index;
	int	x;

	index = 1;
	x = 0;
	if (argc > 1)
	{
		while (index < argc)
		{
			x = 0;
			while (argv[index][x] != '\0')
			{
				write(1, &argv[index][x], 1);
				x++;
			}
			write(1, "\n", 1);
			index++;
		}
	}
	return (0);
}
