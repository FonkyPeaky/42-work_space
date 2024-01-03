/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irinaineshina <iraunikel@student.42.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 13:38:21 by irinaineshina     #+#    #+#             */
/*   Updated: 2024/01/03 14:02:25 by irinaineshina    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void ft_swap(int *a, int *b)
{
	int	temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int main(void)
{
    int a = 42;
    int b = 24;

    printf("before swap a = %d b = %d\n", a, b);
    ft_swap(&a, &b);
    printf("after swap a = %d b = %d\n", a, b);
    return 0;
}*/
