/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0x2c@HACK_CC.42.EU </connectSRC>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:47:09 by 0x2c@HACK_C       #+#    #+#             */
/*   Updated: 2026/10/02 18:47:14 by 0x2c@HACK_C      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}