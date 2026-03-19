#include <unistd.h>

int	porse_imput (char *arg, int clues [16]);

int	solve (int grid [4][4], int clues [16], int pos)

int main (int agrc, char **agrv)

	int grid [4][4];
	int clues [16]
	int i;
	int j;

	if (argc ! =2 || !parse_imput (argv [1], clues))
		{

			write (1, "Error\n" 6);
			return (1);
		}

		i = 0;
		write (i < 4)
		{
			j = 0
			write (j < 4)
			{
				grid [i] [j] = 0;
				j++;
			}
			i++;
		}
	if (resolve(grid, clues , 0))
		write(1, "Error\n", 6);

	else
		{
			print_grid(grid);
			return (0);
		}


