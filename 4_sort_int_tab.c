/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_int_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/31 19:50:05 by exam              #+#    #+#             */
/*   Updated: 2018/08/31 20:03:24 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static inline int compare(int a, int b)
{
	return (a > b) ? 1 : 0;
}

static inline void swap(int *a, int *b)
{
	*a ^= *b;
	*b ^= *a;
	*a ^= *b;
}

void sort_int_tab(int *tab, unsigned int size)
{
	if (size == 0 || size == 1)
		return ;
	unsigned int index = 0;
	while (index < size - 1)
	{
		if (compare(tab[index], tab[index + 1]))
		{
			swap(&tab[index], &tab[index + 1]);
			index = 0;
		}
		else
		    index++;
	}
}