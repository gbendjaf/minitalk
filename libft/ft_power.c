/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbendjaf <gbendjaf@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/17 09:29:13 by gbendjaf          #+#    #+#             */
/*   Updated: 2021/07/18 18:02:33 by gbendjaf         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_power(int i, int c)
{
	int	count;
	int	valeur;

	count = 0;
	valeur = i;
	if (c == 0)
		return (1);
	if (c == 1)
		return (i);
	while (count < c - 1)
	{
		valeur = valeur * i;
		count++;
	}
	return (valeur);
}
