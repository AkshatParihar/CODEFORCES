#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            int y;
            cin>>y;
            x += y;
        }
        int ans = max(0, x - m);
        cout << ans << endl;
    }
    return 0;
}
