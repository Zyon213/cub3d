/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yonas <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 13:36:52 by yonas             #+#    #+#             */
/*   Updated: 2021/10/10 23:52:22 by yonas            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, unsigned int n)
{
	unsigned char	*sc;
	unsigned int	i;

	i = 0;
	sc = (unsigned char *)(s);
	while (i < n)
	{
		sc[i] = '\0';
		i++;
	}
}