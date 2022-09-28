/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeseyeu <myeseyeu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 21:46:31 by myeseyeu          #+#    #+#             */
/*   Updated: 2022/09/22 21:46:31 by myeseyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n >= 0)
	{
		write(1, "P", 1);
	}
	else
	{
		write(1, "N", 1);
	}
}

/* int main() {
 	int n= -42;
	 //int n= 100;
 	ft_is_negative(n);
	write(1, "\n", 1);
 	return(0);
 } */