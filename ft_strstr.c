/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 11:01:54 by anpatil           #+#    #+#             */
/*   Updated: 2025/08/03 11:02:01 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i] != 0)
	{
		j = 0;
		while ((to_find[j] != 0) && (str[i + j] == to_find[j]))
		{
			j++;
		}
		if (to_find[j] == 0)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
/* 
int main(void)
{
	char string[] = "Concatenate";
	char smol[] = "cat";
	ft_strstr(string, smol);
	printf("%s\n", ft_strstr(string, smol));
	char smol1[] = "nat";
	ft_strstr(string, smol1);
	printf("%s\n", ft_strstr(string, smol1));
	char smol2[] = "bat";
	ft_strstr(string, smol2);
	printf("%s", ft_strstr(string, smol2));
} */