/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeseyeu <myeseyeu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 22:32:02 by myeseyeu          #+#    #+#             */
/*   Updated: 2022/09/22 22:32:02 by myeseyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_digits(char a, char b, char c)
{
	a += '0';
	b += '0';
	c += '0';
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	format(char a, char b, char c)
{
	if (a + b + c++ != 24)
		write(1, ", ", 2);
	else
		write(1, "\n", 1);
}

void	ft_print_comb(void)
{
	char	a;
	char	b;
	char	c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 7)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				print_digits(a, b, c);
				format(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}

int	main(void)
{
	ft_print_comb();
}