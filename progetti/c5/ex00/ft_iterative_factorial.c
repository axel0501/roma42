/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 11:56:20 by ametta            #+#    #+#             */
/*   Updated: 2020/12/11 11:01:01 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int i;

	if (nb < 0)
		return (0);
	i = nb - 1;
	while (i > 0)
	{
		nb *= i;
		i--;
	}
	return (nb);
}