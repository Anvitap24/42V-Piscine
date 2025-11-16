/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:04:48 by anpatil           #+#    #+#             */
/*   Updated: 2025/07/28 14:10:42 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int	main(void)
{
	int a = 69;
	int b = 10;
	int *p1;
	int *p2;
	int x;
	int y;
	
	p1 = &x;
	p2 = &y;
	
	printf("p1 = %p\n", p1);
	printf("a = %d\n", a);
	ft_div_mod(a, b, p1, p2);
	a = 0;
	while (a < 0)
	{
		a--;	
	}
	printf("x = %d\n", x);
	printf("y = %d\n", y);

	return(0);
}*/
