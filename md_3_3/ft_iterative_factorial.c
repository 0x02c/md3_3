/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: 0x2c@HACK_CC.42.EU </connectSRC>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 18:46:53 by 0x2c@HACK_C       #+#    #+#             */
/*   Updated: 2026/10/02 18:47:00 by 0x2c@HACK_C      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}