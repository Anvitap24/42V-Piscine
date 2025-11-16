/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 10:57:49 by anpatil           #+#    #+#             */
/*   Updated: 2025/08/03 10:57:51 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if ((unsigned char)s1[i] != (unsigned char)s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*int	main(void)
{
	char str1[] = "";
	char str2[] = "/He";
	int i = ft_strcmp(str1, str2);
	printf("%d\n", i);
	char str3[] = "Hellow";
	char str4[] = "";
	int j = ft_strcmp(str3, str4);
	printf("%d\n", j);
	char str5[] = "Hello";
	char str6[] = "Hello123";
	int k = ft_strcmp(str5, str6);
	printf("%d", k);
}*/