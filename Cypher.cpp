//Problem:
//Name:
//Author:Vedant Borkar
#include<bits/stdc++.h>
#define ll = long long;
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++)
    {
        int b;
        cin >> b;
        if(b == 0)
        {
            continue;
        }
        string now;
        cin >> now;
        for(int j = 0; j < b; j++)
        {
            if(now[j] == 'U'){a[i]--;}
            else if(now[j] == 'D'){a[i]++;}
            if(a[i] < 0){a[i]+=10;}
            if(a[i] > 9){a[i]-=10;}
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
 
int main(){
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
    int t;
    cin>> t;
    while(t--)
    {
        solve();
    }
    return 0;
}