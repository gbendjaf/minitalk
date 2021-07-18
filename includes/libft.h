/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbendjaf <gbendjaf@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/06 16:48:38 by gbendjaf          #+#    #+#             */
/*   Updated: 2021/07/18 17:24:39 by gbendjaf         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <string.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_atoi(char *str);
size_t	ft_strlen(const char *s);
char	*ft_itoa(int n);
int		ft_power(int i, int c);
int		ft_isdigit(int c);
char	*ft_strdup(const char *src);
void	*ft_memalloc(size_t size);

#endif
