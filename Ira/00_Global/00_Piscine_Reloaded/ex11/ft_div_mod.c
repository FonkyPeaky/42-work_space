/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irinaineshina <iraunikel@student.42.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:12:36 by irinaineshina     #+#    #+#             */
/*   Updated: 2024/01/03 14:12:49 by irinaineshina    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod) 
{
    if (b != 0) 
    {
        *div = a / b;
        *mod = a % b;
    }
}
/*
int main() 
{
    int a = 12;
    int b = 4;
    int div;
    int mod;

    ft_div_mod(a, b, &div, &mod);

    printf("Division of %d by %d results in %d with a remainder of %d\n", a, b, div, mod);

    return 0;
}*/
