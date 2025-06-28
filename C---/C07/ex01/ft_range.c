/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogokdas <ogokdas@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 21:33:22 by ogokdas           #+#    #+#             */
/*   Updated: 2025/06/29 00:56:15 by ogokdas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*ret;
	int		i;

	i = 0;
	if (min >= max)
	{
		return (0);
	}
	ret = malloc(sizeof(int) * (max - min));
	if (!ret)
		return (0);
	while (min < max)
	{
		ret[i] = min;
		i++;
		min++;
	}
	return (ret);
}
