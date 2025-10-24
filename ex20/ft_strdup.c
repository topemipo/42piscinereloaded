/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tadeyelu <tadeyelu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:26:52 by tadeyelu          #+#    #+#             */
/*   Updated: 2025/10/24 19:50:12 by tadeyelu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		srclen;
	char	*ptr;

	i = 0;
	srclen = ft_strlen(src);
	ptr = (char *)malloc((srclen + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	while (i < srclen)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[srclen] = '\0';
	return (ptr);
}

// #include <stdio.h>
// int main(void)
// {	//method 1
//     char *name = "Temi";
//     char *namecopy = ft_strdup(name);

//     printf("%s\n", name);
//     printf("%s", namecopy);
// }
