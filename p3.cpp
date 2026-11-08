#include <iostream>
using namespace std;
int main()
{
    int sum = 0;
    int n1, n2;
    cin >> n1 >> n2;
    for (int i = n1;i <= n2;i++)
    {
        if (i % 3 == 0)
            sum += 1;


    }

    cout << "a=" << n1 << ",b=" << n2 << ",n=" << sum << endl;
    return 0;
}