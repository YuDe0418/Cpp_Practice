<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int t,y;cin >> t;
    for (int i = 0; i < t; i++) 
    {
        cin >> y;
        cout << (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0) ? "a leap year" : "a normal year") << "\n";
    }
}
    
=======
#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int t,y;cin >> t;
    for (int i = 0; i < t; i++) 
    {
        cin >> y;
        cout << (((y % 4 == 0) && (y % 100 != 0)) || (y % 400 == 0) ? "a leap year" : "a normal year") << "\n";
    }
}
    
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
