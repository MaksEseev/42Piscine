/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeseyeu <myeseyeu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 21:56:15 by myeseyeu          #+#    #+#             */
/*   Updated: 2022/09/23 21:56:15 by myeseyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}	
}

/* #include <stdio.h>

int main(void)
{
	int tab[] = {9,2,7,4,5};
	int i=0;
	int size = sizeof(tab)/sizeof(tab[0]);
	while (i < size)
	{
		printf("%d:%d ",i,tab[i]);
		i++;
	}
	
	ft_rev_int_tab(tab,size);
	printf("\n");
	i = 0;
	while (i < size)
	{
		printf("%d:%d ",i,tab[i]);
		i++;
	}
	printf("\n");
} */