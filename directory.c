#include <stdio.h>

int main()
{
    int n, i, m, j, k, p;
    char dirname[20], folder[10][20];
    char subfolder[10][20], files[10][20];

    printf("Enter main directory name: ");
    scanf("%s", dirname);

    printf("Enter number of folders: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter folder name: ");
        scanf("%s", folder[i]);

        printf("Enter number of subfolders: ");
        scanf("%d", &m);

        for(j = 0; j < m; j++)
        {
            printf("Enter subfolder name: ");
            scanf("%s", subfolder[j]);

            printf("Enter number of files: ");
            scanf("%d", &p);

            for(k = 0; k < p; k++)
            {
                printf("Enter file name: ");
                scanf("%s", files[k]);
            }

            printf("\nMain Directory: %s\n", dirname);
            printf("Folder: %s\n", folder[i]);
            printf("Subfolder: %s\n", subfolder[j]);

            for(k = 0; k < p; k++)
            {
                printf("File: %s\n", files[k]);
            }
        }
    }

    return 0;
}
