/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carlosed <carlosed@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/22 12:27:11 by carlosed          #+#    #+#             */
/*   Updated: 2021/09/22 17:24:47 by carlosed         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# define	BASE_HEX			"0123456789abcdef"
# define	BASE_HEX_UPPER		"0123456789ABCDEF"
# define	BASE_DECI		"0123456789"

int		ft_printf(const char *fmtd, ...);
int		ft_putchar(char c);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s1);

#endif
