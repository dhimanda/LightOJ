// Coded by Dhiman Sarker Bappi (Dhimanda) - RMSTU
// 
// Today 26/11/2020 Bangladesh Standard Time  20:26:22 pm 
// ---------------------  Problem Info  ---------------------
// Problem: 1261 - K-SAT Problem
// Contest: LightOJ
// URL: http://lightoj.com/volume_showproblem.php?problem=1261
// ----------------------------------------------------------


/*
	(c) copyright : dhimanda
*/

#include<bits/stdc++.h>
using namespace std;
#define    F           first
#define    S           second
#define    pb          push_back
#define    popb        pop_back
#define    pf          push_front
#define    popf        pop_front
#define    forr(i,l,r) for(int i = int(l); i <= int(r); i++)
#define    for0(i,n)   for(int i = 0; i < int(n); i++)
#define    lcm(a,b)    (a*b)/gcd(a,b)
#define    gcd(a,b)    __gcd(a,b)
#define    pi          2*acos(0)
#define    elif        else if
#define    ll          long long
#define    nl          '\n'
#define    endl        '\n'
#define    sp          fixed << setprecision
#define    all(x)      x.begin(),x.end()
#define    power(n,p)  pow_mod(n, p, (1LL<<62))
#define    yes         printf("Yes\n")
#define    no          printf("No\n")


// ===================== custom function ==========================
ll pow_mod(ll nn, ll pp, ll mm) { ll res = 1; while(pp > 0) { if(pp&1) res = (res * nn) % mm; pp = pp >> 1; nn = (nn * nn) % mm; } return res; }

void dhimanda();
// ===================== Main function ==========================
int main()
{
    //fast;
    int t=1;
    scanf("%d" , &t);
    forr(i,1,t){
        printf("Case %d: ", i);
        dhimanda();
    }
    return 0;
}
void dhimanda(){
    int n,m,k;
    scanf("%d %d %d" , &n ,&m ,&k) ; 
    int a[m+1] = {0};
    int grid [n+1][k+1] ; 
    forr(i,1,n) {
    	forr(j,1,k){
    		scanf("%d" , &grid[i][j]) ; 
    	}
    }
    int p ;
    scanf("%d" , &p) ;
    forr(i,1,p) {
    	int x;
    	scanf("%d" , &x) ; 
    	a[x] = 1 ; 
    }
    bool flag = false ; 
    forr(i,1,n) {
    	bool ok = false; 
    	forr(j,1,k){
    		
    		int x = grid[i][j] ; 
    		int idx  = abs(x) ; 
    		if(x<0 and a[idx]==0){
    			ok = true ; 
    			break ; 
    		}
    		else if(x>0 and a[idx]==1){
    			ok = true; 
    			break ; 
    		}
    		else{
    			continue ;
    		}
    	}
    	if(ok) {
    		flag = true ; 
    	}
    	else {
    		no ; 
    		return ;
    	}
    	
    }
    (flag) ? yes : no ; 
}

// Contact : chessdhiman@gmail.com
