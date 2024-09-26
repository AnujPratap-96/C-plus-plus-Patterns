#include <iostream>
using namespace std;

/* Pattern 7:
    * * * * *
     * * * *
      * * *
       * *
        *
*/

void Pattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < 2 * n - 2 * i - 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    Pattern7(n);
    return 0;
}
