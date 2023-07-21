/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: livieira <livieira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 15:11:39 by livieira          #+#    #+#             */
/*   Updated: 2023/07/20 22:15:57 by livieira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

int	ft_display(char *file)
{
	int		r;
	int		file_descriptor;
	char	buffer[65536];

	file_descriptor = open(file, O_RDONLY);
	if (file_descriptor == -1)
		return (0);
	r = read(file_descriptor, &buffer, 65536);
	if (r == -1)
	{
		close(file_descriptor);
		return (0);
	}
	write(1, &buffer, r);
	close(file_descriptor);
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write(2, "Too many arguments.\n", 20);
	else
	{
		if (!ft_display(argv[1]))
			write(2, "Cannot read file.\n", 16);
	}
	return (0);
}
