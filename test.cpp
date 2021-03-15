#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int *input, int size)
{
    int a;
    for (int j = 0; j < size - 1; j++)
    {
        for (int i = 0; i < size - j - 1; i++)
        {
            if (input[i] > input[i + 1])
            {
                a = input[i];
                input[i] = input[i + 1];
                input[i + 1] = a;
            }
        }
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {

        int size;
        cin >> size;

        int input[size];

        for (int i = 0; i < size; ++i)
        {
            cin >> input[i];
        }

        bubbleSort(input, size);

        int sum = 0, temp = input[0];

        for (int i = 0; i < size; i++)
        {
            sum += temp - input[i];
            temp++;
        }

        if (sum <= 0)
        {
            cout << "Second" << endl;
        }
        else if (sum % 2 == 0)
        {
            cout << "Second" << endl;
        }
        else if (sum % 2 != 0)
        {
            cout << "First" << endl;
        }
    }
    return 0;
}