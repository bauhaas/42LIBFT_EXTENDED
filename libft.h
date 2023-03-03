#ifndef LIBFT_H
#define LIBFT_H

#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <error.h>
#include <limits.h>
#include <stdbool.h>

#define MAX_FD 256
#define BUFFER_SIZE 32
#define FALSE 0
#define TRUE 1

#define COLOR_RESET "\033[0m"

#define COLOR_BLACK "\033[0;30m"
#define COLOR_RED "\033[0;31m"
#define COLOR_GREEN "\033[0;32m"
#define COLOR_YELLOW "\033[0;33m"
#define COLOR_BLUE "\033[0;34m"
#define COLOR_MAGENTA "\033[0;35m"
#define COLOR_CYAN "\033[0;36m"
#define COLOR_WHITE "\033[0;37m"

#define COLOR_BOLD_BLACK "\033[1;30m"
#define COLOR_BOLD_RED "\033[1;31m"
#define COLOR_BOLD_GREEN "\033[1;32m"
#define COLOR_BOLD_YELLOW "\033[1;33m"
#define COLOR_BOLD_BLUE "\033[1;34m"
#define COLOR_BOLD_MAGENTA "\033[1;35m"
#define COLOR_BOLD_CYAN "\033[1;36m"
#define COLOR_BOLD_WHITE "\033[1;37m"

#define ABS(X) ((X<0)?(-X):(X))

typedef struct s_list
{
	void *content;
	struct s_list *next;
} t_list;

extern int options;

/** strings **/
char **ft_nsplit(char const *s, char c, int n);
char **ft_split(char const *s, char c);

char *ft_strnstr(const char *s, const char *substr, size_t len);
char *ft_substr(char const *s, unsigned int start, size_t len);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
char *ft_strncpy(char *dest, const char *src, size_t n);
char *ft_strncat(char *dest, const char *src, size_t n);
char *ft_strstr(const char *str, const char *substr);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_strtrim(char const *s, char const *set);
char *ft_strmap(char const *s, char (*f)(char));
char *ft_strcpy(char *dest, const char *src);
char *ft_strcat(char *dest, const char *src);
char *ft_strndup(const char *s, size_t n);
char *ft_strrchr(const char *str, int c);
char *ft_strchr(const char *str, int c);
char *ft_add_char(char *str, char c);
char *ft_add_str(char *s1, char *s2);
char *ft_strdup(const char *str);
char *ft_strjoins(char **strs);
char *ft_strlower(char *str);
char *ft_strupper(char *str);
char *ft_strnew(size_t size);
char *ft_itoa(int n);

int ft_strnequ(char const *s1, char const *s2, size_t n);
int ft_strncmp(const char *s1, const char *s2, size_t n);
int ft_strcmp(const char *s1, const char *s2);
int ft_strequ(char const *s1, char const *s2);
int ft_strcmp(const char *s1, const char *s2);

size_t ft_strlcpy(char *dest, const char *src, size_t size);
size_t ft_strlcat(char *dest, const char *src, size_t size);
size_t ft_strlen(const char *str);

void ft_striteri(char *s, void (*f)(unsigned int, char *));
void ft_striter(char *s, void (*f)(char *));
void ft_strdel(char **as);
void ft_strclr(char *s);

/** misc **/
bool ft_hasOptionEnabled(int opt);
bool hasOptionEnabled(int opt);
int ft_toupper(int ch);
int ft_tolower(int ch);

/** put **/
void ft_putnchar(const char c, const int n);
void ft_putendl_fd(char const *s, int fd);
void ft_putstr_fd(char const *s, int fd);
void ft_putchar_fd(char c, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr(char *str);
void ft_putendl(char *s);
void ft_putchar(char c);
void ft_putnbr(int n);

/** gnl **/
char	*strjoin_gnl(char const *s1, char const *s2);
int		get_next_line(const int fd, char **line);

/** ints **/
int		ft_atoi(const char *str);
size_t	ft_intlen(long long nb);

/** error **/
void	printErrorAndExit(char *error, int exit_value);
void	printError(char *error);

/** memory **/
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t n);
void	*ft_memchr(const void *ptr, int c, size_t n);
void	*ft_memdup(const void *src, size_t size);
void	*ft_memset(void *s, int c, size_t n);
void	*ft_calloc(size_t count, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memalloc(size_t size);
void	ft_memdel(void **ap);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

/** boolean **/
bool	ft_isempty(char *str);
bool	ft_isnbr(char *str);
bool	ft_isalpha(int ch);
bool	ft_isdigit(int ch);
bool	ft_isalnum(int ch);
bool	ft_isascii(int ch);
bool	ft_isprint(int ch);
bool	ft_isspace(int ch);

/** lists **/
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstsplit(char const *s, char c);

void	ft_lstadd_front(t_list **alst, t_list *new);
void	ft_lstadd_back(t_list **alst, t_list *new);
void	ft_lstdelone(t_list *alist, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));

int		ft_lstsize(t_list *lst);

#endif