#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

#define ARR_SIZE 5


void func1();
void func2();
void func3();
void func4();
void func5();

void func1()
{
    int *arr1 = NULL;

    if (ARR_SIZE > SIZE_MAX / sizeof(int))
    {
        printf("Size overflow\n");
        return;
    }

    arr1 = (int *)malloc(ARR_SIZE * sizeof(int));
    if (arr1 == NULL)
    {
        printf("Memory allocation failed in func1\n");
        return;
    }

    for (int i = 0; i < ARR_SIZE; i++)
        arr1[i] = i;

    func2();

    free(arr1);     
    arr1 = NULL;
}


void func2()
{
    int *arr2 = NULL;

    if (ARR_SIZE > SIZE_MAX / sizeof(int))
        return;

    arr2 = (int *)malloc(ARR_SIZE * sizeof(int));
    if (arr2 == NULL)
    {
        printf("Memory allocation failed in func2\n");
        return;
    }

    for (int i = 0; i < ARR_SIZE; i++)
        arr2[i] = i + 10;

    func3();

    free(arr2);     
    arr2 = NULL;
}


void func3()
{
    int *arr3 = NULL;

    if (ARR_SIZE > SIZE_MAX / sizeof(int))
        return;

    arr3 = (int *)malloc(ARR_SIZE * sizeof(int));
    if (arr3 == NULL)
    {
        printf("Memory allocation failed in func3\n");
        return;
    }

    for (int i = 0; i < ARR_SIZE; i++)
        arr3[i] = i + 20;

    func4();

    free(arr3);     
    arr3 = NULL;
}


void func4()
{
    int *arr4 = NULL;

    if (ARR_SIZE > SIZE_MAX / sizeof(int))
        return;

    arr4 = (int *)malloc(ARR_SIZE * sizeof(int));
    if (arr4 == NULL)
    {
        printf("Memory allocation failed in func4\n");
        return;
    }

    for (int i = 0; i < ARR_SIZE; i++)
        arr4[i] = i + 30;

    func5();

    free(arr4);     
    arr4 = NULL;
}


void func5()
{
    int *arr5 = NULL;

    if (ARR_SIZE > SIZE_MAX / sizeof(int))
        return;

    arr5 = (int *)malloc(ARR_SIZE * sizeof(int));
    if (arr5 == NULL)
    {
        printf("Memory allocation failed in func5\n");
        return;
    }

    for (int i = 0; i < ARR_SIZE; i++)
        arr5[i] = i + 40;

    for (int i = 0; i < ARR_SIZE; i++)
        printf("%d ", arr5[i]);

    printf("\n");

    free(arr5);     
    arr5 = NULL;
}

int main()
{
    func1();
    return 0;
}

