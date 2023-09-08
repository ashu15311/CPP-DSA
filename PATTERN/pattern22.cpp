// 1111
//  222
//   33
//    4

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1;
    while (i <= n)
    {
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space -= 1;
        }

        int j = 1;
        int a = n - i + 1;
        while (j <= a)
        {
            cout << i;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}