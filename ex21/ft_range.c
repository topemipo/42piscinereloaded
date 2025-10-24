/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 19:51:06 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/10/24 20:51:44 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	n;
	int	*ptr;
	int	counter;

	if (min > max)
		return (NULL);
	n = max - min;
	ptr = (int *)malloc(n * sizeof(int));
	if (ptr == NULL)
		return (NULL);
	counter = 0;
	while (counter < n)
	{
		ptr[counter] = min + counter;
		counter++;
	}
	return (ptr);
}

// #include <stdio.h>
// int main(void)
// {
// 	int	i;

// 	i = 0;
// 	while (i < 2)
// 	{
// 		printf("%i\n", ft_range(7,7)[i]);

// 		i++;
// 	}
// }
