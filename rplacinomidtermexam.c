#include <stdio.h>
#include <stdlib.h>

int main()
{
    float loadBalance = 1000.00f, amountLoad, balanceOfLoad, totalLoadRequest = 0, totalLoadBalance = -500.00f;
    int numberOfPersonToBeLoaded, loadTransacNum = 0;

    printf("Load Balance: %.2f\n", loadBalance);
    printf("Enter number of person to be loaded: ");
    scanf("%d", &numberOfPersonToBeLoaded);
    printf("==========================================\n");

    for (; loadTransacNum < numberOfPersonToBeLoaded; loadTransacNum++)
    {
        printf("Load Transaction No. %d\n", loadTransacNum);
        printf("Amount Load Php: ");
        scanf("%f", &amountLoad);
        balanceOfLoad = loadBalance - amountLoad;
        printf("Balance of Load Php%.2f", balanceOfLoad);
        totalLoadRequest += amountLoad;
        totalLoadBalance = loadBalance - amountLoad;
        printf("\n");
        loadTransacNum++;

        printf("==========================================\n");
        printf("==========================================\n");
        printf("Load Transaction No. %d\n", loadTransacNum);
        printf("Amount Load Php: ");
        scanf("%f", &amountLoad);
        balanceOfLoad -= amountLoad;
        printf("Balance of Load Php%.2f", balanceOfLoad);
        totalLoadRequest += amountLoad;
        totalLoadBalance -= amountLoad;
        printf("\n");
        loadTransacNum++;

        printf("==========================================\n");
        printf("==========================================\n");
        printf("Load Transaction No. %d\n", loadTransacNum);
        printf("Amount Load Php: ");
        scanf("%f", &amountLoad);
        balanceOfLoad -= amountLoad;
        totalLoadRequest += amountLoad;
        printf("Balance of Load Php%.2f", balanceOfLoad);
        printf("\n");
        printf("==========================================\n");
        printf("\n");

        while(totalLoadRequest > loadBalance)
        {
            printf("   All load request processed\n");
            printf("!===================ALERT================!\n");
            printf("Please Check your Loading Transaction\n");
            printf("           RENSON S. PLACINO\n");
            printf("Total Number of transaction: %d\n", numberOfPersonToBeLoaded);
            printf("Total Load request is Php %.2f\n", totalLoadRequest);
            printf("Total Load Balance is Php %.2f\n", balanceOfLoad);
            break;
        }
            while (totalLoadRequest < loadBalance)
            {
                printf("   All load request processed\n");
                printf("!===================GREAT================!\n");
                printf("             No problem\n");
                printf("           RENSON S. PLACINO\n");
                printf("!========================================!\n");
                printf("Total Number of transaction: %d\n", numberOfPersonToBeLoaded);
                printf("Total Load request is Php %.2f\n", totalLoadRequest);
                printf("Total Load Balance is Php %.2f\n", balanceOfLoad);
                break;
            }

    break;

    }

    return 0;

}
