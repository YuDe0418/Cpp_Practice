<<<<<<< HEAD
#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int n,m,sum;
    while(cin >> n >> m){
        sum=0;
        for(int i=0; ;i++)
        {
            sum += n+i;
            if(sum > m)
            {
                cout << i+1 << "\n";
                break;
            }
        }
    }
}
=======
#include <bits/stdc++.h>
using namespace std;

signed main(void)
{
    int n,m,sum;
    while(cin >> n >> m){
        sum=0;
        for(int i=0; ;i++)
        {
            sum += n+i;
            if(sum > m)
            {
                cout << i+1 << "\n";
                break;
            }
        }
    }
}
>>>>>>> 854365870cbba534c15fe99049fe9c63cba566e8
