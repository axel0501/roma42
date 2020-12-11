/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 14:30:12 by ametta            #+#    #+#             */
/*   Updated: 2020/12/11 10:57:13 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i < 46341 && i * i < nb)
	{
		i++;
		if (i * i == nb)
			return (i);
	}
	return (0);
}
