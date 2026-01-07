#include <stdio.h>
#include <stdlib.h>

#define ARR_SIZE 5

int *g_arr1;
int *g_arr2;
int *g_arr3;
int *g_arr4;
int *g_arr5;

void func2();
void func3();
void func4();
void func5();


void func1()
{
    g_arr1 = (int *)malloc(ARR_SIZE * sizeof(int));
    for (int i = 0; i < ARR_SIZE; i++)
        g_arr1[i] = i;

    func2();
}


void func2()
{
    g_arr2 = (int *)malloc(ARR_SIZE * sizeof(int));
    for (int i = 0; i < ARR_SIZE; i++)
        g_arr2[i] = i + 10;

    
    free(g_arr1);

}
   func3();

void func3()
{
    g_arr3 = (int *)malloc(ARR_SIZE * sizeof(int));
    for (int i = 0; i < ARR_SIZE; i++)
        g_arr3[i] = i + 20;

    free(g_arr2);

    func4();
}


void func4()
{
    g_arr4 = (int *)malloc(ARR_SIZE * sizeof(int));
    for (int i = 0; i < ARR_SIZE; i++)
        g_arr4[i] = i + 30;

    func5();
}


void func5()
{
    g_arr5 = (int *)malloc(ARR_SIZE * sizeof(int));
    for (int i = 0; i < ARR_SIZE; i++)
        g_arr5[i] = i + 40;

    free(g_arr4);
}

int main()
{
    func1();

    free(g_arr5);

    return 0;
}

