/// Coded by Dhiman Sarker Bappi (Dhimanda) - RMSTU

#include<bits/stdc++.h>
using namespace std;
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
#define    nl          '\n'
#define    endl        '\n'
#define    fori(i,b,e) for(int (i)=(b); (i) <= (e); (i)++)
#define    for0(i,n)   for(int (i)=0; (i) < (n); (i)++)
#define    sp          fixed << setprecision
#define    all(x)      x.begin(),x.end()
#define    power(n,p)  pow_mod(n, p, (1LL<<62))

// ===================== DEBUG  ==========================
#ifdef dhimanpc
vector<string>vec_spltr(string s){s+=',';vector<string>res;while(!s.empty())
res.push_back(s.substr(0, s.find(','))),s=s.substr(s.find(',')+1);return res;}
void dbg_out(vector<string>__attribute__((unused))args,__attribute__((unused))int idx,
__attribute__((unused))int LINE_NUM){cerr<<endl;}template<typename Head,typename... Tail>
void dbg_out ( vector <string> args, int idx, int LINE_NUM, Head H, Tail... T)
{if(idx>0)cerr<<", ";else cerr << "Line(" << LINE_NUM << ") ";stringstream ss;ss<<H;
cerr<<args[idx]<<" = "<<ss.str();dbg_out(args,idx+1,LINE_NUM, T...);}
#define    debug(...) dbg_out(vec_spltr(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)
#define    in_file     freopen("input.c", "r", stdin)
#define    out_file    freopen("output.c", "w", stdout)
#define    fast        0
#else
#define    debug(...)  0
#define    in_file     0
#define    out_file    0
#define    fast        ios_base :: sync_with_stdio(0), cin.tie(0), cout.tie(0)
#endif
// ===================== custom function ==========================
ll pow_mod(ll nn, ll pp, ll mm) { ll res = 1; while(pp > 0) { if(pp&1) res = (res * nn) % mm; pp = pp >> 1; nn = (nn * nn) % mm; } return res; }

void dhimanda();
// ===================== Main function ==========================
int powcnt(int n, int x){
    int cnt = 0 ;
    int sum = x;
    while(n>=sum) {
        cnt += (n/sum);
        sum *= x;
    }
    return cnt;
}
int pq(int p,int x) {
    int cnt = 0 ;
    while(p%x==0) {
        cnt++;
        p/=x;
    }
    return cnt;
}
int main()
{
    //in_file;
    //out_file;
    //fast;
    int t=1;
    cin >> t;
    //scanf("%d" , &t);
    fori(i,1,t){
        printf("Case %d: ", i);
        dhimanda();
    }
    return 0;
}
void dhimanda(){
    int n,r,p,q;
    cin >> n >> r >> p >> q; 
    // scanf("%d %d %d %d" , &n , &r , &p , &q);
    //cin >> n >> r >> p >> q;
    int n2,r2,n_r2,x2,n5,r5,n_r5,x5;
    n2 = powcnt(n,2) , n5 = powcnt(n,5);
    r2 = powcnt(r,2) , r5 = powcnt(r,5);
    n_r2 = powcnt(n-r,2) , n_r5 = powcnt(n-r,5);
    x2 = pq(p,2)*q , x5=pq(p,5)*q;
    int a = n2 - r2 - n_r2 + x2 ;
    int b = n5 - r5 - n_r5 + x5 ;
    //debug(min(a,b)) ; 
    cout << min(a,b) << endl; 
}

// Contact : chessdhiman@gmail.com

