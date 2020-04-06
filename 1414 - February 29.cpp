/// Coded by Dhiman Sarker Bappi (Dhimanda) - RMSTU

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

bool chk (int i){
    return (((i% 4 == 0) && (i % 100 != 0)) || (i % 400 == 0)) ? true : false ;
}

int main()
{
    fast;
    //in_file;
    //out_file;
    int t;
    cin >> t;
    int kase = 0;
    string a[3] = {"Dhiman","January", "February" };
    while(t--){
        string m1,m2;
        ll d1,y1,d2,y2;
        char ch;
        cin>>m1>>d1>>ch>>y1;
        cin>>m2>>d2>>ch>>y2;
        if(m1==a[2] || m1 == a[1]) ;
        else if(chk(y1)) y1++;
        if(chk(y2)) {
            if(m2 == a[1]) y2--;
            if(m2 == a[2] && d2 != 29) y2--;
        }
        ll d = ((y2/4 - (y1-1)/4 ) - (y2/100 - (y1-1)/100) )  + ( y2/400 - (y1-1)/400 ) ;
        printf("Case %d: %lld\n", ++kase , d);
    }
    return 0;
}


// Contact : chessdhiman@gmail.com

