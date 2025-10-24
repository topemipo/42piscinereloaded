/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:57:59 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/10/22 21:51:48 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb >= 0 && nb <= 12)
	{
		//Base Case
		if	(nb == 1)
			return 1;
	
		return nb * ft_recursive_factorial(nb - 1);
	}
	else
		return (0);
}

// #include <stdio.h>
// int	main(void)
// {
//     printf("The answer is %i", ft_recursive_factorial(13));     
// }
