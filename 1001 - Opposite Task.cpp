#include <bits/stdc++.h>
#define br break
#define elif else if
#define pb push_back
#define ppb pop_back
#define bs binary_search
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2){
            cout<<n/2<<" "<<(n/2)+1<<endl;
        }
        else{
            cout<<n/2<<" "<<n/2<<endl;
        }
    }
    return 0;
}
 
