#include<stdlib.h>
#include<stdio.h>


int main()
{
    int sum, hc, bc;
    printf("sum: ");
    scanf("%d\t", &sum);
    printf("hc: ");
    scanf("%d\t", &hc);
    printf("bc: ");    
    scanf("%d\t", &bc);


    int max_b = sum / bc;
    int max_h = sum / hc;
    for (int horses = sum/hc; horses >= 0; horses--)
    {
        int um;
        int bulls = (sum - horses * horses) % bc;
        um = bulls;

        if (um == 0)
        printf("%d %d\n", horses, bulls);
    }
    return EXIT_SUCCESS;
}
/* Мы узнали какое максимальное кол-во быков можно купить на эту сумму.

*/