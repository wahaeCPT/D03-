/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wkoela <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 10:14:41 by wkoela            #+#    #+#             */
/*   Updated: 2020/07/11 13:10:13 by wkoela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_ft(int *nbr)
{
	*nbr=42;
}
void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	 ft_putnbr(int nb)
{	
	if(nb <10 && nb >= 0)
	{
	   	ft_putnbr(nb + '0');
	}
		else if (nb >= 10)
		{
		ft_putnbr(nb / 10);
		ft_putchar(nb % 10 + '0');
		}
		else
{
		ft_putchar('-');
		ft_putnbr(nb * -1);
	}
}
