/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larchimb <larchimb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 17:19:16 by larchimb          #+#    #+#             */
/*   Updated: 2025/11/12 11:36:17 by larchimb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return ((int)ft_strlen(src));
	while (i < (size - 1) && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return ((int)ft_strlen(src));
}
/*
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	size_t	n = 0;
	const char	src[] = "Hello";
	const char	src2[] = "Hello";
	char	dest[n];
	char	dest2[n];

	strlcpy(dest,src,n);
	ft_strlcpy(dest2,src2,n);
	printf("%s\nft: %s", dest, dest2);
}
*/
