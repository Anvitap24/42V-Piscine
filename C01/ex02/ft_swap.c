/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 20:54:03 by anpatil           #+#    #+#             */
/*   Updated: 2025/07/28 14:04:39 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
int main(void)
{
	int x;
	int y;

	x = 11;
	y = 24;
	printf("x = %d\n", x);
	printf("y = %d\n", y);

	ft_swap(&x, &y);

	printf("x = %d\n", x);
	printf("y = %d\n", y);
}*/
