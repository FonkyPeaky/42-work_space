/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irinaineshina <iraunikel@student.42.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:03:52 by irinaineshina     #+#    #+#             */
/*   Updated: 2024/01/03 13:11:21 by irinaineshina    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char i)
{
	write(1, &i, 1);
}

void	ft_print_numbers(void)
{
	char	i;
	i = '1';
	while (i <= '9')
	{
		ft_putchar(i);
		i++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	return(0);
}*/


