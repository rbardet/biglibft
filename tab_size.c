/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 02:13:11 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/13 16:21:23 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	tab_size(char **tab)
{
	int	a;

	if (!tab || !tab[0])
		return (0);
	a = 0;
	while (tab[a] != NULL)
		a++;
	return (a);
}
