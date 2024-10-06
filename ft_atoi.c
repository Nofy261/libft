int	ft_atoi(const char *nptr)
{
	int	i;
	int	stock;
	int	sign;

	stock = 0;
	sign = 1;
	i = 0;
	while (nptr[i] == 32 || (nptr[i] >= 9 && nptr[i] <= 13))
		i++;
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i + 1] == '+')
			return (0);
		if (nptr[i] == '-')
			sign = sign * -1;
		if (nptr[i + 1] == '-')
			return (0);
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		stock = (stock * 10) + (nptr[i] - '0');
		i++;
	}
	return (stock * sign);
}
