/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0x2c@HACK_CC.42.EU </connectSRC>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:47:42 by 0x2c@HACK_C       #+#    #+#             */
/*   Updated: 2026/10/02 18:47:49 by 0x2c@HACK_C      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}