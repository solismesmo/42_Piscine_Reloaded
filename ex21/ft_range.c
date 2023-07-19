/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 21:30:44 by livieira          #+#    #+#             */
/*   Updated: 2023/07/18 18:02:45 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*copy;
	int	diff;
	int	count;

	if (min >= max)
		return (0);
	diff = max - min;
	count = 0;
	copy = malloc(diff * (sizeof(int)));
	if (!copy)
		return (0);
	while (min < max)
		copy[count++] = min++;
	return (copy);
}

/* #include <stdio.h>

int	main(void)
{
	int    *temp;
	int    i;
	int    a;
	int    b;
	int    diff;

	a = 10;
	b = 12;
	temp = ft_range(a, b);
	i = 0;
	diff = b - a;
	while (i < diff)
	{
		printf("%i\n", temp[i]);
		i++;
	}
	free(temp);
	return (0);
} */