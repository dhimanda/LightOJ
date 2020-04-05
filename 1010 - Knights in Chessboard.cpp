/// Coded by Dhiman Sarker Bappy (Dhimanda) - RMSTU

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

int Int(){int x;scanf("%d", &x);return x;}
#define    Int         Int()
#define    mx          100010


int main()
{
    //in_file;
    //out_file;
    int t;
    cin >> t ;
    for(int i=1 ; i <= t ; i++){
        int r,c;
        cin >> r >> c;
        cout << "Case "<<i<<": ";
        if(r%2==0 && c%2==0 && r > 2 && c > 2){
            cout << (r*c)/2 <<endl;
        }
        else if(r%2==1 && c%2==1 && r>2 && c >2){
            cout << ((r*c)/2)+1 <<endl;
        }
        else if(r == 1 || c == 1) cout << r*c <<endl;
        else if(r==2 || c == 2){
            if(r==2 && c==2) cout<<4<<endl;
            else {
                int m = (r * c)/2;
                if(m%4==0) cout <<m <<endl;
                else if(m%2==0) cout<<m+2<<endl;
                else cout << m + 1 <<endl;
            }
        }
        else cout << (r*c) / 2 <<endl ;

    }
    return 0;
}


// Conatct : chessdhiman@gmail.com
