/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larchimb <larchimb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/14 10:12:44 by larchimb          #+#    #+#             */
/*   Updated: 2025/11/18 16:44:32 by larchimb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdint.h>
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void			*ptr;

	if (size && (nmemb > SIZE_MAX / size))
		return (malloc(0));
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	size_t	nbr, size;

	if (ac != 3)
		return (1);
	nbr = (size_t)atoi(av[1]);
	size = (size_t)atoi(av[2]);
	printf("%p", calloc(nbr, size));
	printf("\nft :\n%p", ft_calloc(nbr, size));
}
*/
