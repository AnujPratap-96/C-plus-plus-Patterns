#include <iostream>
using namespace std;

/* Pattern 12:
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/

void Pattern12(int N)
{
    int num = 1;
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}

int main()
{   
    int N = 5;
    Pattern12(N);    
    return 0;
}
