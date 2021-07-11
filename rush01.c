/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mkukalay <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 09:42:55 by mkukalay          #+#    #+#             */
/*   Updated: 2021/07/11 13:58:53 by frassat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_char(char *c)
{
	write(1, c, 1);
}

void	rush(int x_max, int y_max)
{
	int	x;
	int	y;

	y = 0;
	while (y++ < y_max)
	{
		x = 0;
		while (x++ < x_max)
		{
			if (x == 1 && y == 1)
				put_char("/");
			else if (x == x_max && y == y_max && y > 1 && x > 1)
				put_char("/");
			else if ((x == x_max && y == 1) || (y == y_max && x == 1))
				put_char("\\");
			else if ((x == 1 || x == x_max) || (y == 1 || y == y_max))
				put_char("*");
			else
				put_char(" ");
		}
		put_char("\n");
	}
}

int	main(void)
{
	rush(60, 50);
	put_char("\n");
	rush(5, 1);
	put_char("\n");
	rush(1, 5);
	put_char("\n");
	rush(0, 0);
	put_char("\n");
	rush(5, 7);
	put_char("\n");
}
