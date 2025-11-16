/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anpatil <anpatil@student.42vienna.com      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 18:17:04 by anpatil           #+#    #+#             */
/*   Updated: 2025/07/29 19:18:56 by anpatil          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	n;
	int	temp;

	n = 0;
	while (n < size / 2)
	{
		temp = tab[n];
		tab[n] = tab[size - 1 - n];
		tab[size - 1 - n] = temp;
		n++;
	}
}
/*
int	main(void)
{
	int i = 5;
	int array[5] = {6, 12, 18, 24, 30};
	int a;
	
	ft_rev_int_tab(array, i);
	for (a = 0; a < i; a++)
	{
		printf("|%d|", array[a]);
	}

}*/
