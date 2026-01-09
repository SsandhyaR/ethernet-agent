#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 5


void func1();
void func2();
void func3();
void func4();
void func5();

void func1(int **arr)
{
    func2();
    free(*(arr+0));
}

void func2(int **arr)
{
    func3();
    free(*(arr+1));
}

void func3(int **arr)
{
    func4();

}

void func4(int **arr)
{
    func5();
    free(*(arr+3));
}

void func5(int **arr)
{
    for (int i = 0; i < ARR_SIZE; i++, arr++)
        *arr = (int *)malloc(100 * sizeof(int));
}

int main()
{
    int *arr[ARR_SIZE];
    func1(arr);
    free(*(arr+4));
    return 0;
}
