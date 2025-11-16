/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 14:14:50 by anpatil           #+#    #+#             */
/*   Updated: 2025/08/02 14:14:54 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char string1[] = "Hell14Now"; // 0
	char string2[] = "HELLISNOW"; // 1
	char string3[] = " "; // 0
	char string4[] = ""; // 1
	
	int i;
	i = ft_str_is_uppercase(string1);
	printf("str1: %d\n", i);
	i = ft_str_is_uppercase(string2);
	printf("str2: %d\n", i);
	i = ft_str_is_uppercase(string3);
	printf("str3: %d\n", i);
	i = ft_str_is_uppercase(string4);
	printf("str4: %d\n", i);

	return 0;
}*/