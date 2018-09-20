int	ft_putchar(char c);

void	ft_print_comb2(void)
{
	int	nr1;
	int	nr2;

	nr1 = 0;
	while(nr1 <= 99)
	{
		nr2 = nr1 + 1;
		while(nr2 <= 99)
		{
			ft_putchar((nr1 / 10) + 48);
			ft_putchar((nr1 % 10) + 48);
			ft_putchar(' ');
			ft_putchar((nr2 / 10) + 48);
			ft_putchar((nr2 % 10) + 48);
			if(nr1 != 98 || nr2 != 99)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			nr2++;
		}
		nr1++;
	}
}
