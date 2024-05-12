/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execution.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zibnoukh <zibnoukh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 20:05:24 by zibnoukh          #+#    #+#             */
/*   Updated: 2024/05/12 20:08:01 by zibnoukh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../philosophers.h"

void	execution(int number_of_philosophers, int time_to_die, int time_to_eat,
		int time_to_sleep)
{
	printf("number_of_philosophers: %d\n", number_of_philosophers);
	printf("time_to_die: %d\n", time_to_die);
	printf("time_to_eat: %d\n", time_to_eat);
	printf("time_to_sleep: %d\n", time_to_sleep);
}
