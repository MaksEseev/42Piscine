/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeseyeu <myeseyeu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:40:33 by myeseyeu          #+#    #+#             */
/*   Updated: 2022/09/23 20:40:33 by myeseyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/* #include <stdio.h>

int main(void)
{
	int div, mod;
	div = -2147483648;
	mod = -2147483648;
	ft_div_mod(10,2,&div,&mod);
	printf("div = %d \n mod = %d\n", div, mod);
	div = -2147483648;
	mod = -2147483648;
	ft_div_mod(10,4,&div,&mod);
    printf("div = %d \n mod = %d\n", div, mod);
	div = -2147483648;
	mod = -2147483648;
	ft_div_mod(10,0,&div,&mod);
	printf("div = %d \n mod = %d\n", div, mod);
} */