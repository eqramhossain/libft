/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 15:51:11 by ehossain          #+#    #+#             */
/*   Updated: 2025/01/05 20:01:26 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_isalpha(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isnum(int c);
int ft_isprint(int c);
size_t ft_strlen(char *str);
void *ft_memset(char *str, int c, size_t n);
void *ft_bzero(char *str, size_t n); 
void *ft_memcpy(void *dest, const void *src, size_t n);
#endif
