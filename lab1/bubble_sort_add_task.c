#include<stdio.h>
#include<time.h>
#include<stdlib.h>
//вывести средний худший лучший случаи
int main()
{   
    srand(time(NULL));

    int k;
    printf("Enter the number of steps:\n");
    scanf("%d", &k);

    int n = 100; //размер массива (менять для тестов)
    float A[n]; 

    int results[k];

    for (int l = 0; l < k; ++l){

        //заполняем массив случайными числами
        for (int i = 0; i < n; ++i){
                A[i] = rand()%20 - 10;
        }

        /*printf("Your source massive: \n");
        for (int i = 0; i < n; ++i){
            printf("%f ", A[i]);
        }*/

        //сортировка
        int count = 1;
        for (int i = 0; i < n; ++i){
            short int flag = 0;
            for (int j = 0; j < n - i - 1; ++j){
                if (A[j] > A[j + 1]){
                    float temp = A[j];
                    A[j] = A[j + 1];
                    A[j + 1] = temp;
                    flag = 1;
                }
                count++;
            }

            if (flag == 0) break;
        }

        /*printf("\nSorted massive: \n");
        for (int i = 0; i < n; ++i){
            printf("%f ", A[i]);
        }*///раскоментить для проверки массивов
        //printf("Steps: %d\n", count);

        results[l] = count;

    }

    int sum = 0;
    for (int i = 0; i < k; ++i){
        sum += results[i];
    }
    
    float average = (float)sum / k;
    printf("\nAverage number of steps: %f", average);

    return 0;
}
