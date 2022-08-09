#include <iostream>
using namespace std;

int main()
{
    const int r = 20;
    const int c = 2;

    double arr[r][c];

    // initializing any 2-D array with random value
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            arr[i][j] = rand() % 10;
        }
    }

    // checking
    cout << "Golden Triangles are: ";
    for (int i = 0; i < r; i++)
    {

        double ratio, ratio2;
        ratio = arr[i][0] / arr[i][1];
        ratio2 = arr[i][i] / arr[i][0];

        if (ratio >= 1.6 && ratio <= 1.7 || ratio2 >= 1.6 && ratio2 <= 1.7)
        {
            cout << i+1 << " ";
        }
        
    }

    return 0;
}