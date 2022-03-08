#include <stdio.h>


int main(){

    int i,j;

    int m,n,r,c;

    printf("Enter dimension for first matrix\n");
    printf("i.e. '2  3'\n");
    scanf("%d",&m);
    scanf("%d",&n);

    printf("Input each element\n");
    printf("i.e If dimensions are 2x3, then 1 2 3\n");
    printf("                                4 5 6\n");
    int arr1[m][n];
    for(i=0;i<m;i++){

        for(j=0;j<n;j++){

            scanf("%d",&arr1[i][j]);

        }

    }
    printf("Enter dimension for second matrix\n");
    printf("i.e. '2  3'\n");
    scanf("%d",&r);
    scanf("%d",&c);
    int arr2[r][c];

    for(i=0;i<r;i++){

        for(j=0;j<c;j++){

            scanf("%d",&arr2[i][j]);

        }



    }

    int arrsum[r][n];

    for(i=0;i<r;i++){

        for(j=0;j<n;j++){

            arrsum[i][j]=(arr1[i][j]+arr2[i][j]);

        }


    }

    printf("\n");
    for(i=0;i<r;i++){

        for(j=0;j<n;j++){

            printf("%d ",arrsum[i][j]);

        }

        printf("\n");
    }

    return 0;

}
