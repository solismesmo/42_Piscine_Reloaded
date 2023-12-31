/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 15:09:49 by livieira          #+#    #+#             */
/*   Updated: 2023/07/17 21:19:35 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*point;
	int		i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	point = malloc(i + 1);
	if (!point)
		return (NULL);
	i = 0;
	while (src[i])
	{
		point[i] = src[i];
		i++;
	}
	point[i] = '\0';
	return (point);
}
