/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frassat <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 09:06:40 by frassat           #+#    #+#             */
/*   Updated: 2021/07/12 09:45:08 by frassat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(int n)
{
	write(1, &n, 1);
}

void	ft_is_negative(void)

{
	int	i;

	i = -50;
	if (i < 0)
	{
		ft_putchar('N');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('P');
		ft_putchar('\n');
	}
}

int	main (void)
{
	ft_is_negative();
	return (0);
}
