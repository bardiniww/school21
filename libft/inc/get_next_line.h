#ifndef GNL_H
# define GNL_H

# include "libft.h"

# define BUFF_SIZE 10
# define FD_STORE_SIZE 2000

typedef struct		s_files
{
	char			*content;
	int				endl;
}					t_files;

int					get_next_line(const int fd, char **line);

#endif
