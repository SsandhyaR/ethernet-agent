#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 5

void func2();
void func3();
void func4();
void func5();


void func1()
{
    int *arr1 = (int *)malloc(ARR_SIZE * sizeof(int));
    for (int i = 0; i < ARR_SIZE; i++)
        arr1[i] = i;

    func2();

    
}


void func2()
{
    int *arr2 = (int *)malloc(ARR_SIZE * sizeof(int));
    for (int i = 0; i < ARR_SIZE; i++)
        arr2[i] = i + 10;

    func3();

  
}


void func3()
{
    int *arr3 = (int *)malloc(ARR_SIZE * sizeof(int));
    for (int i = 0; i < ARR_SIZE; i++)
        arr3[i] = i + 20;

    func4();

 
}


void func4()
{
    int *arr4 = (int *)malloc(ARR_SIZE * sizeof(int));
    for (int i = 0; i < ARR_SIZE; i++)
        arr4[i] = i + 30;

    func5();

}

void func5()
{
    int *arr5 = (int *)malloc(ARR_SIZE * sizeof(int));
    for (int i = 0; i < ARR_SIZE; i++)
        arr5[i] = i + 40;

    for (int i = 0; i < ARR_SIZE; i++)
        printf("%d ", arr5[i]);

    printf("\n");

    
}

int main()
{
    func1();
    return 0;
}

