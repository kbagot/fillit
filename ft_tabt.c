/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbagot <kbagot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 19:22:10 by kbagot            #+#    #+#             */
/*   Updated: 2016/11/29 20:13:01 by kbagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fillit.h"

int		ft_tabt(t_list *alist)
{
	int		i;
	int		nb;
	t_list	save;

	nb = 0;
	save = alist;
	while (alist)
	{
		nb++;
		alist = alist->next;
	}
	alist = save;
	i = 0;
	if (nb > 1)
	{
		while (i * i < nb)
			i++;
		return (i * 2);
	}
	if (nb == 1)
		return (2);
	return (0);
}
