#include <iostream>
using namespace std;

/* Pattern 2:
      1
      1 2
      1 2 3
      1 2 3 4
      1 2 3 4 5
*/

void Pattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << j + 1 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    Pattern2(n);
    return 0;
}
