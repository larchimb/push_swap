/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larchimb <larchimb@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/06 17:14:01 by larchimb          #+#    #+#             */
/*   Updated: 2025/11/07 16:07:34 by larchimb         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int     main(int ac, char **av)
{
	if (ac != 2)
		return (1);
	printf("%d", isdigit(*av[1]));
	printf("\nft : %d", ft_isdigit(*av[1]));

}
*/
