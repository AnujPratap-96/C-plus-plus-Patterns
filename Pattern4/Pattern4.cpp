#include <iostream>
using namespace std;

/* Pattern 4:
    * * * * *
    * * * *
    * * *
    * *
    *
*/

void Pattern4(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = i; j > 0; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    Pattern4(n);
    return 0;
}
