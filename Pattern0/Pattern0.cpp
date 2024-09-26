#include <iostream>
using namespace std;

/* Pattern 0:
    * * * * *
    * * * * *
    * * * * *
    * * * * *
    * * * * *
*/

void Pattern0(int N)
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

int main()
{   
    int N = 5;
    Pattern0(N);
    return 0;
}
