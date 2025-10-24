/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 19:24:24 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/10/22 21:15:36 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// #include <string.h>
// #include <stdio.h>
// int main(void)
// {
// 	printf("%i\n", strcmp("anh", "ang"));
//     printf("%i", ft_strcmp("anh", "ang"));
// }
