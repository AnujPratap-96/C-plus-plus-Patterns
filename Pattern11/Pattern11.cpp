#include <iostream>
using namespace std;

/* Pattern 11:
1        1
12      21
123    321
1234  4321
12345 54321
*/

void Pattern11(int N)
{
    int spaces = 2 * (N - 1);
    
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j;
        }
        
        for (int j = 1; j <= spaces; j++) {
            cout << " ";
        }
        
        for (int j = i; j >= 1; j--) {
            cout << j;
        }
        
        cout << endl;
        spaces -= 2;
    }
}

int main()
{   
    int N = 5;
    Pattern11(N);
    return 0;
}
