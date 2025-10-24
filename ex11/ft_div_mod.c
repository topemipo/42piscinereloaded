/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 16:32:59 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/10/17 16:06:03 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// #include <stdio.h>
// int	main(void)
// {
// 	int tage;
// 	int aage;

// 	tage = 30;
// 	aage = 25;

// 	ft_div_mod(11, 5, &tage, &aage);
// 	printf("Temi is %i years old and Akintunde is %i years old", tage, aage);
// }
