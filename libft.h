/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/05 15:51:11 by ehossain          #+#    #+#             */
/*   Updated: 2025/02/10 09:51:06 by ehossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int					ft_isalpha(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isnum(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_strncmp(const char *str1, const char *str2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_atoi(const char *str);
char				*ft_strchr(const char *str, int c);
char				*ft_strrchr(const char *str, int c);
char				*ft_strdup(const char *s1);
char				*ft_substr(const char *s, unsigned int start, size_t len);
char				*ft_strjoin(const char *s1, const char *s2);
void				*ft_memset(char *str, int c, size_t n);
void				*ft_bzero(char *str, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *str, int c, size_t n);
void				*ft_calloc(size_t count, size_t size);
size_t				ft_strlen(char *str);
size_t				ft_strlcpy(char *dest, const char *src, size_t len);
size_t				ft_strlcat(char *dest, const char *src, size_t len);
/* **************************************************************************** */

/* ***************************** LIBFT BONUS ********************************** */

/* **************************************************************************** */

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

t_list				*ft_lstnew(void *content);
void				ft_print_list(t_list *head);
void				ft_lstadd_front(t_list **lst, t_list *new);
t_list				*ft_lstlast(t_list *lst);
void				ft_lstadd_back(t_list **lst, t_list *new);

/* **************************************************************************** */

/* *********************************** END ************************************ */

/* **************************************************************************** */
#endif
