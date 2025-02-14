#include <stdio.h>
//посчитать колво операций
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

    printf("Your source massive: \n");
    for (int i = 0; i < n; ++i){
        printf("%f ", A[i]);
    }

    //сортировка
    int count = 0;
    for (int i = 1; i < n; ++i){
        for (int j = i - 1; j >= 0 && A[j] > A[j + 1]; --j){
            float temp = A[j];
            A[j] = A[j + 1];
            A[j + 1] = temp;
            count++; 
        }
    }

    printf("\nSorted massive: \n");
    for (int i = 0; i < n; ++i){
        printf("%f ", A[i]);
    }
    printf("\n%d", count);

    return 0;
}
