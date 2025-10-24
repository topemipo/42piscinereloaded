/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 12:54:04 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/10/22 17:00:47 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	left;
	int	right;
	int	mid;

	left = 0;
	right = nb;
	if (nb <= 0)
		return (0);
	while (left <= right)
	{
		mid = left + ((right - left) / 2);
		if (mid * mid == nb)
			return (mid);
		else if (mid * mid > nb)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (0);
}

// #include <stdio.h>
// int	main(void)
// {
//     printf("%i", ft_sqrt(5));  
// }
