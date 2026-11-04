#include <stdio.h>

void hanoi(int n, char from, char to, char temp)
{
    if (n == 1)
    {
        printf("%c->%c\n", from, to);
        return;
    }
    hanoi(n - 1, from, temp, to);
    printf("%c->%c\n", from, to);
    hanoi(n - 1, temp, to, from);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    hanoi(n, 'a', 'b', 'c');

    return 0;
}

