/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irinaineshina <iraunikel@student.42.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:54:21 by irinaineshina     #+#    #+#             */
/*   Updated: 2024/01/03 13:00:11 by irinaineshina    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void	ft_putchar(char i)
{
	write(1, &i, 1);
}

void	ft_print_alphabet(void)
{
	char	i;
	i = 'a';

	while (i <= 'z')
	{
		ft_putchar(i);
		i++;
	}
}

int	main(void)
{
	ft_print_alphabet();
	return(0);
}
