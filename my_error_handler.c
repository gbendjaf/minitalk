/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_error_handler.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbendjaf <gbendjaf@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:06:43 by gbendjaf          #+#    #+#             */
/*   Updated: 2021/07/18 18:53:53 by gbendjaf         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	error_handler(char *str)
{
	write(2, str, ft_strlen(str));
	exit(1);
}
