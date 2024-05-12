/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philosophers.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 16:10:53 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/12 20:09:49 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philosophers.h"

void	call_the_checker(int check, int ac, char **av)
{
	check = checker(ac, av);
	if (check && (ft_atoi(av[2]) >= 60) && (ft_atoi(av[3]) >= 60)
		&& (ft_atoi(av[4]) >= 60))
		execution(ft_atoi(av[2]), ft_atoi(av[3]), ft_atoi(av[3]),
			ft_atoi(av[4]));
	else
	{
		print("Error\n");
		exit(1);
	}
}

int	main(int ac, char **av)
{
	int	check;

	check = 0;
	if (ac == 5)
		call_the_checker(check, ac, av);
	else
		print("number_of_philosophers time_to_die time_to_eat time_to_sleep\n");
	return (0);
}
