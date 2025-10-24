/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 15:58:32 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/10/17 16:06:15 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int tage;
// 	int aage;

// 	tage = 30;
// 	aage = 25;

// 	ft_swap(&tage, &aage);
// 	printf("Temi is %i years old and Akintunde is %i years old", tage, aage);
// }
