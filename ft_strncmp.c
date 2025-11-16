/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:58:35 by anpatil           #+#    #+#             */
/*   Updated: 2025/08/03 10:58:39 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (i < n))
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/* 
int	main(void)
{
	char str1[20] = "Hello";
	char str2[20] = "Hello";
	unsigned int n = 6;

	int i = ft_strncmp(str1, str2, n);
	printf("%d\n", i);
	char str3[] = "Hellow";
	char str4[] = "Hello";
	i = ft_strncmp(str3, str4, n);
	printf("%d\n", i);
	char str5[] = "Hello";
	char str6[] = "HeL23";
	i = ft_strncmp(str5, str6, n);
	printf("%d", i);
} */
