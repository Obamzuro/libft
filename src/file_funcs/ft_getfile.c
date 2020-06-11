#include "libft.h"

ssize_t ft_get_file_content(int fd, char **ret)
{
	char		*temp;
	char		*buf;
	uint32_t	size;
	uint32_t	was_read;
	ssize_t		sum_line_size;
	
	size = 1024;
	sum_line_size = 0;
	*ret = (char *)ft_memalloc(size);
	buf = (char *)ft_memalloc(size);
	while ((was_read = read(fd, buf, 1023)) >= 0)
	{
		sum_line_size += was_read;
		if (!was_read)
			break ;
		temp = *ret;
		*ret = (char *)ft_memalloc(sum_line_size + 1);
		ft_memcpy(*ret, temp, sum_line_size - was_read);
		ft_memcpy(*ret + sum_line_size - was_read, buf, was_read);
		ft_bzero(buf, 1024);
		free(temp);
	}
	free(buf);
	if (was_read == -1)
	{
		free(ret);
		return (-1);
	}
	return (sum_line_size);
}

char	*ft_get_file(const char *filename)
{
	char		*file_content;
	ssize_t		ret;
	int			fd;
	
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	ret = ft_get_file_content(fd, &file_content);
	if (ret == -1)
		return (NULL);
	return (file_content);
}

char	*ft_run_command(const char *command)
{
	FILE	*fp;
	int		fd;
	ssize_t		ret;
	char		*file_content;

	if (command == NULL)
		return (NULL);
	fp = popen(command, "r");
	if (fp == NULL)
		return (NULL);
	fd = fileno(fp);
	ret = ft_get_file_content(fd, &file_content);
	if (ret == -1)
		return (NULL);
	return (file_content);
}
