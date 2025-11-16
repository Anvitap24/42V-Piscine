/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:59:46 by anpatil           #+#    #+#             */
/*   Updated: 2025/08/03 10:59:49 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, const char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	while ((dest[i] != 0))
	{
		i++;
	}
	j = 0;
	while ((src[j] != 0) && (j < nb))
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = 0;
	return (dest);
}
/* 
int main(void)
{
	char destination[100] = "Yuri";
	const char source[] = "Tarded";
	unsigned int i = 4;
	char *str = ft_strncat(destination, source, i);
	printf("%s", str);
	return 0;
} */