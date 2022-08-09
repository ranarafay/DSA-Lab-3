#include <iostream>
using namespace std;

void swap(int *x, int*y)
{
    float temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void BubbleSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                swap(arr[i], arr[j]);  
            }
            
        }
        
    }
    
}

int main()
{
    const int size = 40;
    int arr[size] = {24, 23, 25, 25, 26, 30, 30, 33, 23, 32, 
                    21, 26, 24, 24, 27, 26, 30, 24, 26, 28, 
                    24, 23, 39, 26, 34, 25, 24, 26, 24, 23, 
                    24, 29, 25, 26, 30, 22, 23, 28, 25, 24};

    BubbleSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}