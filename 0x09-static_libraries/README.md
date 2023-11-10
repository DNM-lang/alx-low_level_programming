#0x09. C - Static libraries

#0..libmy.a, main.h
-  static library libmy.a containing all the functions listed below:
		int _putchar(char c);
		int _islower(int c);
		_isalpha(int c);
		_abs(int n);
		int _isupper(int c);
		_isdigit(int c);
		int _strlen(char *s);
		_puts(char *s);
		*_strcpy(char *dest, char *src);
		_atoi(char *s);
		*_strcat(char *dest, char *src);
		*_strncat(char *dest, char *src, int n);
		*_strncpy(char *dest, char *src, int n);
		_strcmp(char *s1, char *s2);
		char *_memset(char *s, char b, unsigned int n);
		char *_memcpy(char *dest, char *src, unsigned int n);
		char *_strchr(char *s, char c);
		unsigned int _strspn(char *s, char *accept);
		char *_strpbrk(char *s, char *accept);
		char *_strstr(char *haystack, char *needle);

#1..create_static_lib.sh.

-a script called create_static_lib.sh that creates a static library called liball.a from all the .c files that are in the current directory.

