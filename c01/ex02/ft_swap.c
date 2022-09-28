/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeseyeu <myeseyeu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:30:39 by myeseyeu          #+#    #+#             */
/*   Updated: 2022/09/23 20:30:39 by myeseyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

/* int main(void)
{
	int x,y;
	x=24;
	y=-11;
	printf("x is %d ",x);
	printf("y is %d\n",y);
	ft_swap(&x, &y);
	printf("x is %d ",x);
	printf("y is %d\n",y);
	return (0);
} */