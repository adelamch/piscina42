int	ft_iterative_factorial(int nb)
{
	int res;

	res = 1;
	if (nb > 0)
	{
		while (nb > 0)
		{
			res *= nb;
			nb--;
		}
		return (res);
	}
	return (0);
}