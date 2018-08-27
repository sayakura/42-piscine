/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/25 02:53:17 by kpeng             #+#    #+#             */
/*   Updated: 2018/08/26 04:57:13 by kpeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	*print_hex(char c)
{
	char *digits;

	digits = "0123456789abcdef";
	ft_putchar('\\');
	if (c < 16)
	{
		ft_putchar('0');
		ft_putchar(digits[c]);
	}
	else
	{
		ft_putchar(digits[c / 16]);
		ft_putchar(digits[c % 16]);
	}
}

void	ft_putstr_non_printable(char *str)
{
	while (*str)
		if (*str < 32 || *str >= 127)
			print_hex(*str++);
		else
			ft_putchar(*str++);
}