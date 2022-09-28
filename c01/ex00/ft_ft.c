/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeseyeu <myeseyeu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 15:03:24 by myeseyeu          #+#    #+#             */
/*   Updated: 2022/09/25 12:20:20 by myeseyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr)

{
	*nbr = 42;
}
	
	int main(void)

{
	int *nbr;
	int number;

	number = 12;
	nbr = &number;

	char values[2];
	values[0] = number / 10 + '0';
	values[1] = number % 10 +'0';
 	write(1, &values,2);
	write(1, "\n", 1);
	ft_ft(nbr);
	values[0] = number / 10 + '0';
	values[1] = number % 10 +'0';
	write(1, &values,2);
	write(1, "\n", 1);
}