#include <stdio.h>
int main(void)
{
    const int budget = 100;
    int pen, ballpen, pencil;
    for (pen = 0; pen <= budget / 3; pen++)
        for (ballpen = 0; ballpen <= (budget - pen * 3) / 2; ballpen++)
            for (pencil = 0; pencil <= 2 * (budget - pen * 3 - ballpen * 2); pencil++)
                if (pen * 3 + ballpen * 2 + pencil / 2 == budget && pen + ballpen + pencil == 100)
                    printf("%d %d %d\n", pen, ballpen, pencil);
    return 0;
}