-Printf Project

-We will create the Printf Command in C langage, this is usen to show different characters/strings/numbers/integers on the cumputer.

-Compilation command : gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c

-Nous sommes authorisés a utiliser plusieurs editeurs tel que VI , VIM ainsi que EMACS.
-Nous utiliserons la commande (gcc) qui utilise les options (-Wall -Werror -Wextra -pedantic -std=gnu89) pour compiler sur Ubuntu 20.
-L'intégralité de nos fichiers retournera a la ligne.
-On va créer un README.md.
-Nous verifierons nos codes avec Betty.
-Nous n'utiliserons pas de variables globales.
-Nous n'utiliserons pas plus de 5 fonctions par fichiers.
-Nous creeront pas de fichiers main.c et on ne le pushera pas.
-Nous inclueront tous nos prototypes dans le main.h et nous les pusheront.
-Sans utiliser la fonction _putchar.

#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Prints a sentence with proper grammar
 *              that forms a piece of art
 *
 * Return: Always 0 (Success)
 */
int main(void)
{   printf("Project Printf of Eric & Nicolas\n");
return (0);
}

