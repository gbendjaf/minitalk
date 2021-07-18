/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_minitalk.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbendjaf <gbendjaf@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:48:38 by gbendjaf          #+#    #+#             */
/*   Updated: 2021/07/18 16:46:23 by gbendjaf         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef MY_MINITALK_H
# define MY_MINITALK_H

# include <stdio.h>
# include <string.h>
# include <stddef.h>
# include <stdlib.h>
# include <signal.h>
# include <zconf.h>
# include <ctype.h>
# include <unistd.h>

void	error_handler(char *str);
char	*ft_strjoin_custom(char *s1, char s2);

#endif
