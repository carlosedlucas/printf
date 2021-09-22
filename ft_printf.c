/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosed <carlosed@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:26:09 by carlosed          #+#    #+#             */
/*   Updated: 2021/09/22 17:27:35 by carlosed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft_printf.h>

int	ft_printf(const char *fmtd, ...)
{
	va_list		args; // struct????
	const char	*str;
	int			counter;

	counter = 0;
	str = ft_strdup(fmtd);
	if (!str)
		return (0);
}

/*
malloc, free, write, va_start, va_arg, va_copy,
va_end

... elipsis
*/
