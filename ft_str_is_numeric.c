/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 13:37:35 by anpatil           #+#    #+#             */
/*   Updated: 2025/08/02 13:37:42 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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
	char string2[] = "80085"; // 1
	char string3[] = " "; // 0
	char string4[] = ""; // 1
	
	int i;
	i = ft_str_is_numeric(string1);
	printf("str1: %d\n", i);
	i = ft_str_is_numeric(string2);
	printf("str2: %d\n", i);
	i = ft_str_is_numeric(string3);
	printf("str3: %d\n", i);
	i = ft_str_is_numeric(string4);
	printf("str4: %d\n", i);

	return 0;
}*/