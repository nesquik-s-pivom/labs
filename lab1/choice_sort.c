#include <stdio.h>
//доп задание: посчитать кол-во перестановок
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
    for (int i = 0; i < n; ++i){
        float min = A[i];
        int index = i;
        for (int j = i; j < n; ++j){
            if (A[j] < min){
                min = A[j];
                index = j;
            }
        }

        float temp = A[i];
        A[i] = A[index];
        A[index] = temp;
        count++;

    }

    printf("\nSorted massive: \n");
    for (int i = 0; i < n; ++i){
        printf("%f ", A[i]);
    }
    printf("\n%d", count);

    return 0;
}
