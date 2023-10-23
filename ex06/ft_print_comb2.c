/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fizad <fizad@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/08 20:18:07 by fizad             #+#    #+#             */
/*   Updated: 2023/08/08 20:42:54 by fizad            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;	
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print((a / 10) + '0');
			print((a % 10) + '0');
			print(' ');
			print((b / 10) + '0');
			print((b % 10) + '0');
			if (a != 98 || b != 99)
			{
				print(',');
				print(' ');
			}
			b++;
		}
		a++;
	}
}
/*
int	main()
{
	ft_print_comb2();
	return 0;
}
*/
