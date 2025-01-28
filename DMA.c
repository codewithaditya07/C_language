// dynamic memory allocation
// malloc

// #include <stdio.h>
// int main()
// {
//     int *fp, n, x;

//     printf("Enter Size of array:- ");
//     scanf("%d", &n);

//     fp = (int *)malloc(n * sizeof(int));
//     for (x = 0; x < n; x++)
//     {
//         printf("Enter Element in array:- ");
//         scanf("%d", &fp[x]);
//     }
//     for (x = 0; x < n; x++)
//     {
//         printf("%d\n", fp[x]);
//     }

//     return 0;
// }

// Calloc
 #include <stdio.h>
     int main()
 {
     int *fp, n, x;

    printf("Enter Size of array:- ");
    scanf("%d", &n);

    fp = (int *)calloc(n, sizeof(int));
    for (x = 0; x < n; x++)

    {
        printf("Enter Element in array:- ");
        scanf("%d", &fp[x]);
    }
    for (x = 0; x < n; x++)
    {
        printf("%d\n", fp[x]);
    }

      return 0 ;
}

