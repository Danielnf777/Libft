int     ft_strncmp(const char *s1, const char *s2, size_t n)
 17 {
 18         size_t  i; 
 19 
 20         i = 0;
 21         while (i < n)
 22         {       
 23                 if (s1[i] == '\0' || s2[i] == '\0' || s1[i] != s2[i])
 24                         return ((unsigned char)s1[i] - (unsigned char)s2[i]);
 25                 i++;
 26         }
 27         return (0);
 28 }

