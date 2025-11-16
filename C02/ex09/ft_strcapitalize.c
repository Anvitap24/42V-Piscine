/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 01:04:50 by anpatil           #+#    #+#             */
/*   Updated: 2025/08/03 11:49:38 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_check_special(char *str, int i)
{
	if (str[i + 1] == '\0')
		return ;
	if ((str[i] >= 7 && str[i] <= 13)
		|| (str[i] >= 32 && str[i] <= 47)
		|| (str[i] >= 58 && str[i] <= 64)
		|| (str[i] >= 91 && str[i] <= 96)
		|| (str[i] >= 123 && str[i] <= 126))
	{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			str[i + 1] = str[i + 1] - 32;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	i = 0;
	while (str[i] != 0)
	{
		if ((i == 0) && (str[i] >= 'a' && str[i] <= 'z'))
			str[i] = str[i] - 32;
		else
			ft_check_special(str, i);
		i++;
	}
	return (str);
}
/* 
int main(void)
{
	char str[] = "hi, hOW Are you? 42words foRty-two; fifty+and+one";

	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
} */