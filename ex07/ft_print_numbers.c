/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 18:14:17 by livieira          #+#    #+#             */
/*   Updated: 2023/07/14 22:21:34 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void);

void	ft_putchar(char c);
/* {
	write(1, &c, 1);
} */

void	ft_print_numbers(void)
{
	int	count_number;

	count_number = 48;
	while (count_number <= 57)
	{
		ft_putchar(count_number);
		count_number++;
	}
}
