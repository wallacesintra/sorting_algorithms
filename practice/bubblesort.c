#include <stdio.h>

void swap(int a, int b);
int arr_length(int arr[]);

int main(void){
    int array[] = {4,7,5,9,11,2,10};
    int a = 12;
    int b = 5;
    swap(a, b);

    int no_of_swap = 0;
    int length = arr_length(array);

    printf("%d", length);

}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;

    printf("a = %d \n", a);
    printf("b = %d \n", b);
}

int arr_length(int arr[])
{
    int length = 0;
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++)
    {
        length++;
    }
    return length;
}