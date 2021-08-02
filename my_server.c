/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbendjaf <gbendjaf@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:06:43 by gbendjaf          #+#    #+#             */
/*   Updated: 2021/07/18 19:25:34 by gbendjaf         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "libft.h"
#include "my_minitalk.h"

#include <math.h> // a enlever <--------------

char	*ft_store(char c, char *str)
{
	char	*store;

	if (str == NULL)
	{
		str = malloc(sizeof(char) * 2);
		if (str == 0)
		{
			error_handler("Erreur lors de l'allocation memoire de str");
			exit(0);
		}
		str[0] = c;
		str[1] = 0;
		return (str);
	}
	store = ft_strjoin_custom(str, c);
	free(str);
	return (store);
}

char	*ft_strjoin_custom(char *s1, char s2)
{
	char	*tab;
	int		i;
	int		len;

	i = -1;
	tab = malloc(sizeof(char) * (ft_strlen(s1) + 1) + 1);
	if (tab == 0)
	{
		error_handler("Erreur lors de l'allocation memoire de tab");
		exit(0);
	}
	if (!tab)
		return (NULL);
	while (s1[++i])
		tab[i] = s1[i];
	len = -1;
	while (++len < 1)
		tab[i + len] = s2;
	tab[i + len] = 0;
	return (tab);
}

void	gestion(int sig)
{
	static int	i;
	static char	c;
	static char	*str;

	if (sig == 30)
		c += ft_power(2, i);
	i++;
	if (i == 8)
	{
		i = 0;
		if (c == 0)
		{	
			write(1, str, ft_strlen(str));
			write(1, "\n", 1);
			free(str);
			str = NULL;
			return ;
		}	
		str = ft_store(c, str);
		c = 0;
	}
}

int	main(void)
{	
	char	*pid;

	pid = ft_itoa(getpid());
	write(1, "Le pid du serveur est : ", 25);
	write(1, pid, ft_strlen(pid));
	write(1, "\n", 1);
	signal(SIGUSR1, gestion);
	signal(SIGUSR2, gestion);
	while (1)
	{
	}
	return (0);
}
