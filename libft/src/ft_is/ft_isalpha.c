/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ayogun <ayogun@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/03 18:54:45 by ayogun            #+#    #+#             */
/*   Updated: 2022/04/03 18:54:46 by ayogun           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c < 'A') || (c > 'Z' && c < 'a') || (c > 'z'))
		return (0);
	return (1);
}