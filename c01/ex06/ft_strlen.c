/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myeseyeu <myeseyeu@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 20:57:23 by myeseyeu          #+#    #+#             */
/*   Updated: 2022/09/23 20:57:23 by myeseyeu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

/* #include <unistd.h>

int main(void)
{
		int size;
		char to_print;
		size = ft_strlen("Hello!");
		to_print = size +'0';
		write(1,&to_print,1);
		write(1,"\n",1);

		size = ft_strlen("");
		to_print = size +'0';
		write(1,&to_print,1);
		write(1,"\n",1);
		
} */