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
#define    yes  	   printf("Yes\n")
#define    no  		   printf("No\n")

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

int main()
{
    in_file;
    //out_file;
    //fast;
    int t=1;
    scanf("%d" , &t); 
    //cin.ignore(); 


    fori(i,1,t){
        printf("Case %d: ", i);
        dhimanda();
    }
    return 0;
}
void dhimanda(){
	double r1,r2,r3;
	cin >> r1 >> r2 >> r3 ; 
	double a = r1+r2 , b = r3+r2 ,c =  r1+r3;
	double s = (a+b+c)/2.0; 
	double area = sqrt(s*(s-a)*(s-b)*(s-c)) ; 

	double areaA=0.5*r1*r1*acos((c*c+a*a-b*b)/(2*c*a));
	double areaB=0.5*r2*r2*acos((b*b+a*a-c*c)/(2*a*b));
	double areaC=0.5*r3*r3*acos((c*c+b*b-a*a)/(2*b*c));

	double ans  = area - (areaA+areaB+areaC) ; 

	printf("%.6f\n" , ans);
}

// Contact : chessdhiman@gmail.com

