#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char *ptr;
    int ra, s, n = 0, m = 0;
    printf("enter length of ur name\n");
    scanf("%d", &s);
    srand(time(NULL));
    ptr = (char *)malloc((s + 1) * sizeof(char));
    printf("enter UR NAME\n");
    scanf("%s", ptr);
    printf("ur name is %s\n", ptr);
    printf("game started\nenter rock , paper or scissor\n");
    for (int i = 0; i < 3; i++)
    {
        char *ntr;
        ntr = (char *)malloc(9 * sizeof(char));
        printf("%s:", ptr);
        char l[] = "computer";
        scanf("%s", ntr);
        ra = rand() % 3;

        if (ra == 1)
        {
            printf("%s :rock\n", l);
        }
        else if (ra == 0)
        {
            printf("%s :paper\n", l);
        }
        else if (ra == 2)
        {
            printf("%s :scissor\n", l);
        }

        if ((ntr[0] == 'r' && ra == 2) || (ntr[0] == 's' && ra == 0) || (ntr[0] == 'p' && ra == 1))
        {
            n = n + 1;
            printf("winner\n");
        }
        else if ((ntr[0] == 'r' && ra == 1) || (ntr[0] == 's' && ra == 2) || (ntr[0] == 'p' && ra == 0))
        {
            printf("draw\n");
        }
        else

        {
            m = m + 1;
            printf("loser\n");
        }
    }
    if (n < m)
    {
        printf("computer wins by score %d\n", m);
    }
    else
    {
        printf("%s wins by score %d\n", ptr, n);
    }

    

    return 0;
}
