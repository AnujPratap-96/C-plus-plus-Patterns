#include <iostream>
using namespace std;

/* Pattern 3:
      1
      2 2
      3 3 3
      4 4 4 4
      5 5 5 5 5
*/

void Pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << i + 1 << " ";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows: ";
    cin >> n;
    Pattern3(n);
    return 0;
}
