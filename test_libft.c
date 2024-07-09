#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "ft_isalpha.c"
#include "ft_isdigit.c"
#include "ft_isalnum.c"
#include "ft_isascii.c"
#include "ft_isprint.c"
#include "ft_strlen.c"
#include "ft_memset.c"
#include "ft_bzero.c"
#include "ft_memcpy.c"
#include "ft_memmove.c"
#include "ft_strlcpy.c"
#include "ft_strlcat.c"
#include "ft_toupper.c"
#include "ft_tolower.c"
#include "ft_strchr.c"
#include "ft_strrchr.c"
#include "ft_strncmp.c"
#include "ft_memchr.c"
#include "ft_memcmp.c"
#include "ft_strnstr.c"
#include "ft_atoi.c"
#include "ft_strdup.c"
#include <stdio.h>
#include <bsd/string.h>
#include <ctype.h>
#include <stdlib.h>
#include <stdint.h>



// Declaraciones de tus funciones con prefijo ft_
int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
size_t ft_strlen(const char *s);
void *ft_memset(void *b, int c, size_t len);
void ft_bzero(void *s, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
size_t ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *s, int c);
char *ft_strrchr(const char *s, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
char *ft_strnstr(const char *haystack, const char *needle, size_t len);
int ft_atoi(const char *nptr);
char *ft_strdup(const char *s);

void print_comparison(const char *func_name, int ft_result, int std_result) {
    printf("%s: %d (esperado: %d) - %s\n", func_name, ft_result, std_result, (ft_result == std_result) ? "PASSED" : "FAILED");
}

void print_pointer_comparison(const char *func_name, const void *ft_result, const void *std_result) {
    printf("%s: %p (esperado: %p) - %s\n", func_name, ft_result, std_result, (ft_result == std_result) ? "PASSED" : "FAILED");
}

int main() {
    // Pruebas para funciones de carácter
    printf("Pruebas para funciones de carácter:\n");

    print_comparison("ft_isalpha('A')", ft_isalpha('A'), isalpha('A'));
    print_comparison("ft_isdigit('5')", ft_isdigit('5'), isdigit('5'));
    print_comparison("ft_isalnum('G')", ft_isalnum('G'), isalnum('G'));
    print_comparison("ft_isascii(128)", ft_isascii(128), isascii(128));
    print_comparison("ft_isprint(' ')", ft_isprint(' '), isprint(' '));

    // Pruebas adicionales de funciones de carácter
    print_comparison("ft_isalpha('1')", ft_isalpha('1'), isalpha('1'));
    print_comparison("ft_isdigit('a')", ft_isdigit('a'), isdigit('a'));
    print_comparison("ft_isalnum('#')", ft_isalnum('#'), isalnum('#'));
    print_comparison("ft_isascii(256)", ft_isascii(256), isascii(256));
    print_comparison("ft_isprint(127)", ft_isprint(127), isprint(127));

    // Pruebas para funciones de manipulación de cadenas y memoria
    printf("\nPruebas para funciones de manipulación de cadenas y memoria:\n");

    char test_str1[100] = "Prueba de longitud";
    char test_str2[100] = "Otra cadena";
    char test_str3[100] = "Cadena para copiar";
    char test_str4[100] = "Cadena destino";
    char test_mem1[100] = "Prueba de memoria";
    char test_mem2[100] = {0};

    printf("ft_strlen('Prueba de longitud'): %lu (esperado: %lu) - %s\n", ft_strlen(test_str1), strlen(test_str1), (ft_strlen(test_str1) == strlen(test_str1)) ? "PASSED" : "FAILED");
    printf("ft_strlen(''): %lu (esperado: %lu) - %s\n", ft_strlen(""), strlen(""), (ft_strlen("") == strlen("")) ? "PASSED" : "FAILED");

    ft_memset(test_mem2, 'A', 5);
    memset(test_mem2, 'A', 5);
    printf("ft_memset(test_mem2, 'A', 5): %s\n", test_mem2);

    ft_bzero(test_mem2, 5);
    bzero(test_mem2, 5);
    printf("ft_bzero(test_mem2, 5): ");
    for (int i = 0; i < 10; i++) printf("%c", test_mem2[i] ? test_mem2[i] : '.');
    printf("\n");

    ft_memcpy(test_str2, test_str1, 7);
    memcpy(test_str2, test_str1, 7);
    printf("ft_memcpy(test_str2, test_str1, 7): %s\n", test_str2);

    ft_memmove(test_str4, test_str3, 15);
    memmove(test_str4, test_str3, 15);
    printf("ft_memmove(test_str4, test_str3, 15): %s\n", test_str4);

    char src1[50] = "Hello, World!";
    char dst1[50];
    char dst2[50];

    size_t len1 = ft_strlcpy(dst1, src1, sizeof(dst1));
    size_t len2 = strlcpy(dst2, src1, sizeof(dst2));
    printf("ft_strlcpy(dst1, src1, sizeof(dst1)): %s (longitud: %lu) (esperado: %s, longitud: %lu) - %s\n", dst1, len1, dst2, len2, (strcmp(dst1, dst2) == 0 && len1 == len2) ? "PASSED" : "FAILED");

    char src2[50] = "Hello";
    char dst3[50] = "Goodbye";
    char dst4[50] = "Goodbye";

    size_t len3 = ft_strlcat(dst3, src2, sizeof(dst3));
    size_t len4 = strlcat(dst4, src2, sizeof(dst4));
    printf("ft_strlcat(dst3, src2, sizeof(dst3)): %s (longitud: %lu) (esperado: %s, longitud: %lu) - %s\n", dst3, len3, dst4, len4, (strcmp(dst3, dst4) == 0 && len3 == len4) ? "PASSED" : "FAILED");

    print_comparison("ft_toupper('a')", ft_toupper('a'), toupper('a'));
    print_comparison("ft_tolower('A')", ft_tolower('A'), tolower('A'));

    const char *s = "Hola mundo";
    print_pointer_comparison("ft_strchr(s, 'o')", ft_strchr(s, 'o'), strchr(s, 'o'));
    print_pointer_comparison("ft_strrchr(s, 'o')", ft_strrchr(s, 'o'), strrchr(s, 'o'));

    print_comparison("ft_strncmp('Hola', 'Holanda', 4)", ft_strncmp("Hola", "Holanda", 4), strncmp("Hola", "Holanda", 4));
    print_comparison("ft_strncmp('Hola', 'Hola', 5)", ft_strncmp("Hola", "Hola", 5), strncmp("Hola", "Hola", 5));
    print_comparison("ft_strncmp('Hola', 'Adios', 2)", ft_strncmp("Hola", "Adios", 2), strncmp("Hola", "Adios", 2));

    char mem1[10] = "abcdefghi";
    char mem2[10] = "abcdefghi";
    print_pointer_comparison("ft_memchr(mem1, 'd', 10)", ft_memchr(mem1, 'd', 10), memchr(mem2, 'd', 10));

    char mem3[10] = "abcdefghi";
    char mem4[10] = "abcdefghi";
    print_comparison("ft_memcmp(mem3, mem4, 10)", ft_memcmp(mem3, mem4, 10), memcmp(mem3, mem4, 10));
    mem3[3] = 'x';
    print_comparison("ft_memcmp(mem3, mem4, 10)", ft_memcmp(mem3, mem4, 10), memcmp(mem3, mem4, 10));

    const char *haystack = "This is a simple string";
    const char *needle = "simple";
    print_pointer_comparison("ft_strnstr(haystack, needle, 20)", ft_strnstr(haystack, needle, 20), strnstr(haystack, needle, 20));
    haystack = "This is a simple string";
    needle = "not found";
    print_pointer_comparison("ft_strnstr(haystack, needle, 20)", ft_strnstr(haystack, needle, 20), strnstr(haystack, needle, 20));

    print_comparison("ft_atoi('1234')", ft_atoi("1234"), atoi("1234"));
    print_comparison("ft_atoi('-1234')", ft_atoi("-1234"), atoi("-1234"));
    print_comparison("ft_atoi('0')", ft_atoi("0"), atoi("0"));
    print_comparison("ft_atoi('   42')", ft_atoi("   42"), atoi("   42"));
    print_comparison("ft_atoi('42abc')", ft_atoi("42abc"), atoi("42abc"));
    print_comparison("ft_atoi('abc')", ft_atoi("abc"), atoi("abc"));

    // Pruebas para ft_strdup
    printf("\nPruebas para ft_strdup:\n");

    const char *str1 = "Hello, World!";
    char *dup1 = ft_strdup(str1);
    char *dup2 = strdup(str1);

    printf("ft_strdup(\"%s\"): %s (esperado: %s) - %s\n", str1, dup1, dup2, (strcmp(dup1, dup2) == 0) ? "PASSED" : "FAILED");

    free(dup1);
    free(dup2);

    const char *str2 = "";
    char *dup3 = ft_strdup(str2);
    char *dup4 = strdup(str2);

    printf("ft_strdup(\"%s\"): %s (esperado: %s) - %s\n", str2, dup3, dup4, (strcmp(dup3, dup4) == 0) ? "PASSED" : "FAILED");

    free(dup3);
    free(dup4);

    return 0;
}
