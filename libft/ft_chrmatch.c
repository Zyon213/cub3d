/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrmatch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yoyohann <yoyohann@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 05:24:38 by yoyohann          #+#    #+#             */
/*   Updated: 2023/02/28 05:24:43 by yoyohann         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_chrmatch(char const s1, char const *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		if (s2[i] == s1)
			return (1);
		i++;
	}
	return (0);
}
