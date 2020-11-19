/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nle-biha <nle-biha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 21:02:46 by nle-biha          #+#    #+#             */
/*   Updated: 2020/11/19 21:09:55 by nle-biha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*calloc(size_t nmemb, size_t size)
{
	char *ret;
	unsigned int i;

	i = 0;
	if (nmemb == 0 || size == 0)
		return (NULL);
	if ((ret = (char *)malloc(nmemb * size)) == NULL)
		return (NULL);
	while (i < nmemb * size)
	{
		ret[i] = '\0';
		i++;
	}
	return ((void *)ret);
}
