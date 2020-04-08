/// Coded by Dhiman Sarker Bappi (Dhimanda) - RMSTU
// Problem Link : http://lightoj.com/volume_showproblem.php?problem=1109
// Problem ID : 1109


#include<bits/stdc++.h>
using namespace std;
#define    in_file     freopen("input.txt", "r", stdin)
#define    out_file    freopen("output.txt", "w", stdout)
#define    fast        ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
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
#define    nl          '\n'
#define    endl        '\n'
#define    forr(i,b,e) for(int (i)=(b); (i) <= (e); (i)++)
#define    fora(i,n)   for(int (i)=0; (i) < (n); (i)++)


int Int(){int x;scanf("%d", &x);return x;}
#define    Int         Int()
#define    mx          100010


int main()
{
    //fast;
    //in_file;
    //out_file;
    int t=1;
    vector <int> v[33];
    for(int i=1 ; i <=1000 ; i++){
        int n=0;
        for(int j=1 ; j <= i; j++){
            if(i%j==0) n++;
        }
        v[n].pb(i);
    }
    int a[1035];
    int hm = 0;
    for(int i=1;i<33; i++) {
        if(v[i].size()==0) continue ;
        for(int j=v[i].size()-1 ; j > -1 ; j--){
            hm++;
            a[hm] = v[i][j] ;
            if(hm>1000) break;
            //cout<<v[i][j] <<" ";
        }
    }
    t=Int;
    //for(int i=1 ; i <= 1000 ; i++) cout<<a[i] << " ";
    forr(k,1,t){
        int dhiman;
        cin >> dhiman;
        printf("Case %d: %d\n",k,a[dhiman]);

    }
    return 0;
}

// Contact : chessdhiman@gmail.com

