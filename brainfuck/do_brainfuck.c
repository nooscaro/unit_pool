/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_brainfuck.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 14:12:35 by exam              #+#    #+#             */
/*   Updated: 2018/08/03 14:30:42 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainfuck.h"

void	init_bytes(void)
{
	int		i;

	i = 0;
	while (i < NBYTES)
	{
		g_bytes[i] = 0;
		i++;
	}
	g_pointer = g_bytes;
	return ;
}

int		go_to_opening_bracket(char *code, int i)
{
	int		num_brackets;

	num_brackets = 1;
	while (i)
	{
		if (code[i] == ']')
			num_brackets++;
		else if (code[i] == '[')
		{
			if (num_brackets - 1 > 0)
				num_brackets--;
			else
				return (i - 1);
		}
		i--;
	}
	return (0);
}

int		go_to_closing_bracket(char *code, int i)
{
	int		num_brackets;

	num_brackets = 1;
	while (code[i] != '\0')
	{
		if (code[i] == '[')
			num_brackets++;
		else if (code[i] == ']')
		{
			if (num_brackets - 1 > 0)
				num_brackets--;
			else
				return (i - 1);
		}
		i++;
	}
	return (i - 1);
}

int		process_operation(char *code, int i)
{
	if (code[i] == '>')
		g_pointer++;
	else if (code[i] == '<')
		g_pointer--;
	else if (code[i] == '+')
		*g_pointer = *g_pointer + 1;
	else if (code[i] == '-')
		*g_pointer = *g_pointer - 1;
	else if (code[i] == '.')
		write(1, g_pointer, 1);
	else if (code[i] == '[' && !(*g_pointer))
		return (go_to_closing_bracket(code, (++i)));
	else if (code[i] == ']' && *g_pointer)
		return (go_to_opening_bracket(code, (--i)));
	return (i);
}

void	brainfuck(char *code)
{
	int		i;

	i = 0;
	init_bytes();
	while (code[i] != '\0')
	{
		i = process_operation(code, i);
		i++;
	}
}
