/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 02:27:08 by anpatil           #+#    #+#             */
/*   Updated: 2025/07/28 14:12:58 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	if (*b != 0)
	{
		tmp = *a;
		*a = *a / *b;
		*b = tmp % *b;
	}
}
/*
int	main(void)
{
	int x;
	int y;

	x = 50;
	y = 20;

	ft_ultimate_div_mod(&x, &y);
	printf("x = %d\n", x);
	printf("y = %d", y);
}*/
