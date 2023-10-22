#include <unistd.h>

/**
 * main - entry point
 *
 * Description: Print something using the write function.
 * Return: 1 (indicating failure)
 */
int main(void)
{
    char a[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(1, a, 59);
    return (1);
}
