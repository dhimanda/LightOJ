/// Coded by Dhiman Sarker Bappy (Dhimanda) - RMSTU
// Problem Link : http://lightoj.com/volume_showproblem.php?problem=1042

#include<bits/stdc++.h>
using namespace std;
#define    in_file     freopen("input.txt", "r", stdin)
#define    out_file    freopen("output.txt", "w", stdout)
#define    F           first
#define    S           second
#define    pb          push_back
#define    popb        pop_back
#define    pf          push_front
#define    popf        pop_front
#define    lcm(a,b)    (a*b)/gcd(a,b)
#define    gcd(a,b)    __gcd(a,b)
#define    pi          2*acos(0)
#define    elif        else if
#define    ll          long long
#define    sp          fixed<<setprecision

 int main()
{
    //in_file;
    //out_file;
    int t=Int;
    int kase = 0;
    while(t--){
        ll n;
        cin >> n;
        string a="";
        while(n){
            if(n%2) a+= '1';
            else a += '0';
            n/=2;
        }
        reverse(a.begin(),a.end());
        a = '0' + a;
        //cout<<a<<endl;
        for(int i= a.size()-1 ; i >= 1 ; i--){
            if(a[i]=='1' && a[i-1]=='0'){
                a[i] = '0';
                a[i-1] = '1';
                sort(a.begin()+i,a.end());
                break;
            }
        }
        //cout<<a<<endl;
        ll ans = 0;
        ll two = 1;
        for(int i= a.size()-1 ; i >= 0 ; i--){
            if(a[i]=='1'){
                ans += two;
            }
            two = two * 2;
        }

        printf("Case %d: " , ++kase);
        cout<<ans<<endl;

    }
    return 0;
}

