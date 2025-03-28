/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbardet- <rbardet-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/28 16:29:15 by rbardet-          #+#    #+#             */
/*   Updated: 2025/03/28 16:34:15 by rbardet-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**copy_tab(char **src)
{
	char	**dest;
	int		i;

	i = 0;
	if (!src)
		return (NULL);
	dest = malloc(sizeof(char *) * (i + 1));
	if (!dest)
		return (NULL);
	while (src[i])
	{
		dest[i] = ft_strdup(src[i]);
		if (!dest[i])
			return (NULL);
		i++;
	}
	dest[i] = NULL;
	return (dest);
}
