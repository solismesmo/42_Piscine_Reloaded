/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 17:47:37 by livieira          #+#    #+#             */
/*   Updated: 2023/07/14 22:20:07 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_putchar(char c);
/* {
	write(1, &c, 1);
} */

void	ft_print_alphabet(void)
{
	int	count_letter;

	count_letter = 97;
	while (count_letter <= 122)
	{
		ft_putchar(count_letter);
		count_letter++;
	}
}
