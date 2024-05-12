/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 16:49:20 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/12 18:47:10 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

int	not_number(char *av)
{
	int	i;
	int	check;

	i = 0;
	check = 1;
	while (av[i])
	{
		if (av[i] == '-' || (av[i] >= 'a' && av[i] <= 'z') || (av[i] >= 'A'
				&& av[i] <= 'Z'))
			return (1);
		i++;
	}
	return (0);
}

int	checker(int ac, char **av)
{
	int	i;
	int	check;

	i = 1;
	while (i < ac)
	{
		check = not_number(av[i]);
		if (check || ft_atoi(av[i]) > INT_MAX)
			return (0);
		i++;
	}
	return (1);
}
