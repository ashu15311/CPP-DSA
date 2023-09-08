// A B C
// D E F
// G H I

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 1,count=1;
    while (i <= n)
    {

        int j = 1;
        while (j <= n)
        {
            char ch='A'+count-1;
            cout << ch << " ";
            count++;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
    return 0;
}