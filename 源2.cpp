#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n;
    cin >> n;
    while (n != -1)
    {
        cin >> n;
        if ((n % 3 == 0) || (n % 7 == 0))
        {
            sum += n;


        }
    }
    cout << sum << endl;
    return 0;
}