/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbendjaf <gbendjaf@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/09 14:06:43 by gbendjaf          #+#    #+#             */
/*   Updated: 2021/07/18 19:19:21 by gbendjaf         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "my_minitalk.h"
#include "libft.h"

int	check_pid(char *argv)
{	
	char	*str;
	int		i;

	str = argv;
	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] >= 48 && str[i] <= 57)
			i++;
		else
			return (1);
	}
	return (0);
}

void	send_message(int pid, unsigned char byte)
{
	char	c;
	int		i;

	c = byte;
	i = 0;
	while (i < 8)
	{
		if (c & 1)
		{
			if (kill(pid, SIGUSR1) == -1)
				error_handler("Le pid il est tout pas bon :(\n");
		}
		else
		{
			if (kill(pid, SIGUSR2) == -1)
				error_handler("Le pid il est tout pas bon :(\n");
		}
		i++;
		c >>= 1;
		usleep(60);
	}
}

void	ft_handler(char *arg1, char *arg2)
{
	int	pid;

	pid = ft_atoi(arg1);
	while (*arg2)
	{
		send_message(pid, *arg2);
		++arg2;
	}
	send_message(pid, *arg2);
}

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "Utilisation correcte : ./client [server_pid] [message]\n", 55);
		return (0);
	}
	if (check_pid(argv[1]) != 0)
	{
		write(1, "Le PID ne doit contenir que des chiffres\n", 41);
		return (0);
	}
	ft_handler(argv[1], argv[2]);
	return (0);
}
