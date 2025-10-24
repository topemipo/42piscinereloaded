/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:40:33 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/10/22 16:25:22 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	product;
	int	counter;

	product = 1;
	counter = 1;
	if (nb >= 0 && nb <= 12)
	{
		while (counter <= nb)
		{
			product = product * counter;
			counter++;
		}
		return (product);
	}
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
// 	printf("The factorial is equal to %i", ft_iterative_factorial(13));     
// }
