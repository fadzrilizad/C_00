/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:51:14 by fizad             #+#    #+#             */
/*   Updated: 2023/08/08 21:51:40 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	buff[20];
	int		i;

	i = 0;
	if (nb < 0)
	{
		print('-');
		nb = nb * (-1);
	}
	while (nb > 0)
	{
		buff[i++] = (nb % 10) + '0';
		nb /= 10;
	}
	while (i >= 0)
	{
		print(buff[i - 1]);
		i--;
	}
}
/*
int	main(void)
{
	ft_putnbr(42);
	return (0);
}
*/
