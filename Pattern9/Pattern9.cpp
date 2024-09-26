#include <iostream>
using namespace std;

/* Pattern 9:
           *
           * *
           * * *
           * * * *
           * * * * *
           * * * *
           * * *
           * *
           *
*/

void Pattern9(int n)
{
    for (int i = 0; i <= 2 * n - 1; i++)
    {
        if (i <= n)
        {
            for (int j = 0; j < i; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            for (int j = 0; j < 2 * n - i; j++)
            {
                cout << "* ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    Pattern9(n);
    return 0;
}
