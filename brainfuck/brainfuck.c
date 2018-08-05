/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 13:47:29 by exam              #+#    #+#             */
/*   Updated: 2018/08/03 14:15:14 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainfuck.h"

int		main(int argc, char **argv)
{
	char	new_line;

	new_line = '\n';
	if (argc == 2)
		brainfuck(argv[1]);
	else
		write(1, &new_line, 1);
	return (0);
}
