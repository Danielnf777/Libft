char	*ft_lines(char *dest, const char *s)
{
	while (*s)
	{
		dest[i] = (char *)malloc(sizeof (char) * (ft_strlen(s) + 1));
		if (!dest[i])
			return (NULL);
		if (*s == c)
			s++;
		while (*s && *s != c)
		{
			dest[i][j++] = *s;
			s++;
			if (*s == c)
			{
				dest[i++][j] = '\0';
				j = 0;
			}
		}
	}
}
