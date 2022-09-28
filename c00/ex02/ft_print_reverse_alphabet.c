/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeseyeu <myeseyeu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:33:04 by myeseyeu          #+#    #+#             */
/*   Updated: 2022/09/22 21:33:04 by myeseyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_reverse_alphabet(void)
{
	char	c ;

	c = 'z';
	while (c >= 'a')
	{
		ft_putchar(c);
		c--;
	}
}

/*int main() {
	ft_print_reverse_alphabet();
 	return(0);
 } */