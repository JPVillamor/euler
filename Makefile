app: main.c tests.c euler.c
	gcc -o app main.c tests.c euler.c -Wall -Wextra -Werror -pedantic -std=c99
