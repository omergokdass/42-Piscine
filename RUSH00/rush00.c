/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ogokdas <ogokdas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/02 21:12:46 by ogokdas           #+#    #+#             */
/*   Updated: 2025/03/02 21:12:48 by ogokdas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int width, char first, char middle, char last)
{
	int	i;

	if (width <= 0)
		return ;
	ft_putchar(first);
	i = 1;
	while (i < width - 1)
	{
		ft_putchar(middle);
		i++;
	}
	if (width > 1)
		ft_putchar(last);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int	row;

	if (x <= 0 || y <= 0)
		return ;
	print_line(x, 'o', '-', 'o');
	row = 1;
	while (row < y - 1)
	{
		print_line(x, '|', ' ', '|');
		row++;
	}
	if (y > 1)
		print_line(x, 'o', '-', 'o');
}
