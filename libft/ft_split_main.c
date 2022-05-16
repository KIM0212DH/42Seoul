#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char	**str = ft_split("aa  bb  123 1234 1   2345   ", ' ');
	int	i = 0;
	while (str[i] != 0)
	{
		printf("%s\n", str[i]);
		i++;
	}
}
