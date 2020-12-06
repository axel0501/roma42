/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ametta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 12:07:33 by ametta            #+#    #+#             */
/*   Updated: 2020/12/04 11:28:32 by ametta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
	{
		if (j < (size - 1))
			dest[j++] = src[i];
		i++;
	}
	dest[j] = '\0';
	return (i);
}
