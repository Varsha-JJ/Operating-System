
#include <stdio.h>

int main()
{
    int n, i, j, temp;
    int bt[20], p[20], pri[20];
    int wt[20], tat[20];

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        p[i] = i+1;

        printf("Enter burst time of P%d: ", i+1);
        scanf("%d", &bt[i]);

        printf("Enter priority of P%d: ", i+1);
        scanf("%d", &pri[i]);
    }

    for(i = 0; i < n-1; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(pri[i] > pri[j])
            {
                temp = pri[i];
                pri[i] = pri[j];
                pri[j] = temp;

                temp = bt[i];
                bt[i] = bt[j];
                bt[j] = temp;

                temp = p[i];
                p[i] = p[j];
                p[j] = temp;
            }
        }
    }

    wt[0] = 0;

    for(i = 1; i < n; i++)
    {
        wt[i] = wt[i-1] + bt[i-1];
    }

    printf("\nProcess\tBT\tPriority\tWT\tTAT\n");

    for(i = 0; i < n; i++)
    {
        tat[i] = wt[i] + bt[i];

        printf("P%d\t%d\t%d\t\t%d\t%d\n",
        p[i], bt[i], pri[i], wt[i], tat[i]);
    }

    return 0;
}
