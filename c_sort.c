#include <unistd.h>
#include <stdio.h>

void    sort_int_ascend(int *arr, int size) 
{
    int i = 0;
    int j;
    while (i < size) {
        j = i + 1;
        while(j < size) {
            if(arr[i] > arr[j]) {  // find minimum number
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            j++;
        }
        i++;
    }
}

int main(void)
{
    int arr[] = {50, 22, 3, 4, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    sort_int_ascend(arr, size);

    // test result
    int i = 0;
    while(i < size) {
        printf("%d", arr[i]);
        i++;
    }
    return 0;
}