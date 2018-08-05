/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainfuck.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/03 14:09:57 by exam              #+#    #+#             */
/*   Updated: 2018/08/03 14:21:15 by exam             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAINFUCK_H
# define BRAINFUCK_H
# define NBYTES 2048
# include <unistd.h>

char	*g_pointer;
char	g_bytes[NBYTES];

void	brainfuck(char *code);

#endif
