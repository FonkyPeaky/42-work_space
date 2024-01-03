/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irinaineshina <iraunikel@student.42.lu>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:23:27 by irinaineshina     #+#    #+#             */
/*   Updated: 2024/01/03 14:33:46 by irinaineshina    ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int ft_iterative_factorial(int nb) {
    int factorial;
    int i;

    // Check for overflow condition and negative input
    if (nb < 0 || nb > 12)
        return (0);
    
    // Factorial of 0 is 1
    if (nb == 0)
        return (1);
    
    factorial = 1;
    i = 1; // Initialize i to 1 because multiplication by 0 is not meaningful

    // Loop to calculate factorial
    while (i <= nb) {
        factorial *= i; // Multiply factorial by i in each iteration
        i++; // Increment i
    }
    return (factorial); // Return the calculated factorial
}
/*
int main() {
    // Test the function with different values
    printf("Factorial of 5 is %d\n", ft_iterative_factorial(5));
    printf("Factorial of 0 is %d\n", ft_iterative_factorial(0));
    printf("Factorial of -3 (should return 0) is %d\n", ft_iterative_factorial(-3));
    printf("Factorial of 12 is %d\n", ft_iterative_factorial(12));
    printf("Factorial of 13 (should return 0 due to overflow) is %d\n", ft_iterative_factorial(13));

    return 0;
}*/
