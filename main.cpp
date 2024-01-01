#include <iostream>
#include <map>

using namespace std;

int main()
{

    int n;
    cin >> n;
    map<int, int> dlll;

    for (int i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        dlll.insert(make_pair(k, i));
    }

    int m;
    cin >> m;
    int l_2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> l_2[i];
    }

    int g = 0;
    for (int i = 0; i < m; i++)
    {
        int j = dlll[l_2[i]] + 1;
        g += j;
    }

    int b = 0;
    for (int i = m; i > 0; i--)
    {
       int j = (n) - (dlll[l_2[i]]);
       b += j;
    }

    cout << g << " " << b << endl;
    return 0;
}