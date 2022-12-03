/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libft.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: anonymous <anonymous@student.codam.nl>       +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/09 15:17:04 by anonymous     #+#    #+#                 */
/*   Updated: 2022/12/03 01:53:10 by anonymous     ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include<stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
# include "get_next_line.h"
# include "ft_printf.h"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

int		ft_isalpha(int a);

int		ft_isdigit(int a);

int		ft_isalnum(int a);

int		ft_isascii(int a);

int		ft_isprint(int a);

size_t	ft_strlen(const char *str);

void	*ft_memset(void *a, int b, size_t c);

void	ft_bzero(void *a, size_t b);

void	*ft_memcpy(void *a, const void *b, size_t c);

void	*ft_memmove(void *a, const void *b, size_t c);

size_t	ft_strlcpy(char *a, const char *b, size_t c);

size_t	ft_strlcat(char *a, const char *b, size_t c);

int		ft_toupper(int a);

int		ft_tolower(int a);

char	*ft_strchr(const char *a, int b);

char	*ft_strrchr(const char *a, int b);

int		ft_strncmp(const char *a, const char *b, size_t c);

void	*ft_memchr(const void *a, int b, size_t c);

int		ft_memcmp(const void *a, const void *b, size_t c);

char	*ft_strnstr(const char *a, char *b, size_t c);

int		ft_atoi(const char *a);

long	ft_atol(const char *a);

void	*ft_calloc(size_t a, size_t b);

char	*ft_strdup(const char *a);

char	*ft_substr(char const *a, unsigned int b, size_t c);

char	*ft_strjoin(char const *a, char const *b);

char	*ft_strtrim(char const *a, char const *b);

char	**ft_split(char const *a, char b);

size_t	ft_nbrlen(size_t nbr, int base);

char	*ft_itoa(int a);

char	*ft_litoa(long a);

char	*ft_xitoa(int a, int capital);

char	*ft_strmapi(char const *a, char (*f)(unsigned int, char));

void	ft_striteri(char *a, void (*f)(unsigned int, char *));

size_t	ft_putchar_fd(char a, int b);

size_t	ft_putstr_fd(char *a, int b);

size_t	ft_putendl_fd(char *a, int b);

size_t	ft_putnbr_fd(int a, int b);

t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new);

int		ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstdelone(t_list *lst, void (*del)(void *));

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif