/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 09:54:16 by ametta            #+#    #+#             */
/*   Updated: 2020/12/04 09:54:20 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_lowercase(char *str)
{
	int check;
	int i;

	check = 1;
	i = 0;
	while ((str[i] != '\0') && (check == 1))
	{
		if (str[i] < 97 || str[i] > 122)
			check = 0;
		i++;
	}
	return (check);
}
