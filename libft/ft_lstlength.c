/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlength.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tgelu <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/18 17:04:40 by tgelu             #+#    #+#             */
/*   Updated: 2018/04/18 17:09:45 by tgelu            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstlength(t_list *list)
{
	int		len;

	len = 0;
	while (list != NULL)
	{
		len++;
		list = list->next;
	}
	return (len);
}
