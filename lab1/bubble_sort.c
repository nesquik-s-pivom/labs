#include<stdio.h>
//вывести средний худший лучший случаи
int main()
{   

    int n; //размер массива
    printf("Enter size of massive:\n");
    scanf("%d", &n);
    float A[n]; 
    
    printf("Please, enter your massive\n");
    for (int i = 0; i < n; ++i){
        scanf("%f", &A[i]);
    }

    for (int l = 0; l < 1; ++l){


        printf("Your source massive: \n");
        for (int i = 0; i < n; ++i){
            printf("%f ", A[i]);
        }

        //сортировка
        for (int i = 0; i < n; ++i){
            short int flag = 0;
            for (int j = 0; j < n - i - 1; ++j){
                if (A[j] > A[j + 1]){
                    float temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                    flag = 1;
                }
            }

            if (flag == 0) break;
        }

        printf("\nSorted massive: \n");
        for (int i = 0; i < n; ++i){
            printf("%f ", A[i]);
        }

    }
    
    return 0;
}
