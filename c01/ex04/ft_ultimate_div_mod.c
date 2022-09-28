/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeseyeu <myeseyeu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:47:23 by myeseyeu          #+#    #+#             */
/*   Updated: 2022/09/23 20:47:23 by myeseyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	if (*b != 0)
	{
		tmp = *a;
		*a /= *b;
		*b = tmp % *b;
	}
}

/* #include <stdio.h>

int main(void)
{
	int a,b;
	a = 9;
	b =2;
	ft_ultimate_div_mod(&a,&b);
	printf("a div b = %d, a mod b = %d\n",a,b);
	a = 10;
	b =0;
	ft_ultimate_div_mod(&a,&b);
	printf("a div b = %d, a mod b = %d\n",a,b);
} */