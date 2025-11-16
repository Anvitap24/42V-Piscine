/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 14:22:52 by anpatil           #+#    #+#             */
/*   Updated: 2025/08/02 14:22:54 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (!(str[i] >= 32 && str[i] <= 126))
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
	char string1[] = "Hell(*)NOW\r"; // 0
	char string2[] = "+-/=@#:';"; // 1
    char string3[] = " \n"; // 0
	char string4[] = ""; // 1
	
	int i;
	i = ft_str_is_printable(string1);
	printf("str1: %d\n", i);
	i = ft_str_is_printable(string2);
	printf("str2: %d\n", i);
	i = ft_str_is_printable(string3);
	printf("str3: %d\n", i);
	i = ft_str_is_printable(string4);
	printf("str4: %d\n", i);

	return 0;
}*/