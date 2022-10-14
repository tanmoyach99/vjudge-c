#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int n2;
        scanf("%d", &n2);
        int ar[n2];
        int count[n2 + 1];
        for (int j = 0; j <= n2; j++)
        {
            count[j] = 0;
        }

        for (int j = 0; j < n2; j++)
        {
            scanf("%d", &ar[j]);
            count[ar[j]]++;
        }
        //        for(int j=0; j<n2; j++)
        //        {
        //            int val = ar[i];
        //            count[val]++;
        //        }
        bool flag = false;
        for (int j = 0; j < n2; j++)
        {
            int val = ar[j];
            if (count[val] >= 3)
            {
                printf("%d\n", val);
                flag = true;
                break;
            }
        }
        //        if(flag ==true)
        //        {
        //            printf("%d\n",ans);
        //        }

        if (flag == false)
        {
            printf("%d\n", -1);
        }
        flag = false;
    }

    return 0;
}
//     int n;
//     scanf("%d", &n);

//     for (int i = 0; i < n; i++)
//     {
//         int m;
//         scanf("%d", &m);
//         int arr[m];
//         for (int j = 1; j <= m; j++)
//         {
//             scanf("%d", &arr[j]);
//         }
//         int counter[m+1];
//         int flag = -1;
//         for (int k = 1; k <= m; k++)
//         {

//             int val = arr[k];
//             // printf("%d\n", val);
//             counter[val]++;
//             if (counter[val] >= 3)
//             {
//                 flag = val;
//             }
//         }

//         printf("%d\n", flag);
//     }

//     return 0;
// }
