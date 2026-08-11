#include <iostream>
#include <unordered_map>
#include <algorithm>
#include <cmath>
using namespace std;

// C++ DSA: Star Pattern 3

unordered_map<int, char> dicts = {
    {0, 'Z'},
    {1, 'A'},
    {2, 'B'},
    {3, 'C'},
    {4, 'D'},
    {5, 'E'},
    {6, 'F'},
    {7, 'G'},
    {8, 'H'},
    {9, 'I'},
    {10, 'J'},
    {11, 'K'},
    {12, 'L'},
    {13, 'M'},
    {14, 'N'},
    {15, 'O'},
    {16, 'P'},
    {17, 'Q'},
    {18, 'R'},
    {19, 'S'},
    {20, 'T'},
    {21, 'U'},
    {22, 'V'},
    {23, 'W'},
    {24, 'X'},
    {25, 'Y'},
    {26, 'Z'},
};

void pattern11(int n);
void pattern12(int n);
void pattern13(int n);
void pattern14(int n);
void pattern15(int n);
void pattern16(int n);
// void pattern18(int n);

int main()
{
    int n;
    cin >> n;
    pattern16(n);
    return 0;
}

void pattern11(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((j + i) % 2 == 0)
            {
                cout << "1 ";
            }
            else
            {
                cout << "0 ";
            }
        }
        cout << "\n";
    }
}

void pattern12(int n)
{
    int spaces = 2 * (n - 1);
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        for (int j = 1; j <= spaces; j++)
        {
            cout << " ";
        }
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }

        cout << "\n";
        spaces -= 2;
    }
}

void pattern13(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << "\n";
    }
}

void pattern14(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (count <= 26)
            {
                cout << dicts[count] << " ";
            }

            else
            {
                int q = count / 26;
                cout << dicts[count - 26 * q] << " ";
            }
            count++;
        }
        cout << "\n";
    }
}

void pattern15(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = (n - i) + 1; j >= 1; j--)
        {
            if (count <= 26)
            {
                cout << dicts[count] << " ";
            }

            else
            {
                int q = count / 26;
                cout << dicts[count - 26 * q] << " ";
            }
            count++;
        }
        cout << "\n";
    }
}

void pattern16(int n)
{
    int count = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (count <= 26)
            {
                cout << dicts[count] << " ";
            }

            else
            {
                int q = count / 26;
                cout << dicts[count - 26 * q] << " ";
            }
        }
        cout << "\n";
        count++;
    }
}

// void pattern18(int n)
// {
//     int count;
//     int rem = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             for (count = rem; count <= n; count++)
//             {
//                 if (count >= 0 && count <= 26)
//                 {
//                     cout << dicts[count] << " ";
//                 }
//                 else if (count > 26)
//                 {
//                     int q = count / 26;
//                     cout << dicts[count - 26 * q] << " ";
//                 }

//                 else
//                 {
//                     if (count < 0 && count >= -25)
//                     {
//                         cout << dicts[count + 26];
//                     }
//                     if (count <= -26)
//                     {
//                         int q = (-count) / 26;
//                         cout << dicts[count + 26 * q + 1] << " ";
//                     }
//                 }
//                 rem--;
//             }
//         }
//         cout << "\n";
//     }
// }
