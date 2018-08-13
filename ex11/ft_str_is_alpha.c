/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboivin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 09:15:36 by rboivin           #+#    #+#             */
/*   Updated: 2018/08/13 14:24:42 by rboivin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_str_is_alpha(char *str)
{
	int		i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 'a' || str[i] > 'z'))
			if ((str[i] != 32) && (str[i] < 'A' || str[i] > 'Z'))
				return (0);
		i++;
	}
	return (1);
}
