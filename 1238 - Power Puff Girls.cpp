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
#define mx 10000
int vis[mx];
std::vector<int> v[mx];
int dist[mx];
int ans=1;

void dfs(int n) {
	vis[n] = 1;
	for(int i=0 ; i <v[n].size() ; i++) {
		int nxt = v[n][i];
		if(vis[nxt]==0) dfs(nxt);
	}
}
void bfs(int s) {
	queue <int> Q;
	Q.push(s);
	vis[s] = 1;
	dist[s] = 0;
	while(!Q.empty()){
		int node = Q.front();
		Q.pop();
		for(int i=0 ; i < v[node].size() ; i++) {
			int nxt = v[node][i];
			if(vis[nxt]==0){
				vis[nxt] = 1;
				dist[nxt] = dist[node]+1;
				Q.push(nxt);
			}
		}
		
	}
}
// ===================== Main function ==========================
int main()
{
    in_file;
    //out_file;
    //fast;
    int t=1;
    scanf("%d" , &t);
    fori(i,1,t){
        printf("Case %d: ", i);
        dhimanda();
    }
    return 0;
}
void dhimanda(){
    int r,c,source;
    scanf("%d %d" , &r ,&c);
    char a[r][c];
    int cd = c-2;
    for(int i=0; i<= (r+1)*(c+1) ; i++){
    	vis[i] = 0;
    	v[i].clear();
    }
    for(int i=0;i<r;i++){
    	for(int j=0 ; j < c ; j++){
    		scanf(" %c" , &a[i][j]);
    	}
    }
    int p=0;
    int aa,bb,cc,hh;
    for(int i=1;i<r-1;i++){
    	for(int j=1 ; j < c-1 ; j++){
    		++p;
    		if(a[i][j]=='a') aa = p;
    		if(a[i][j]=='b') bb = p;
    		if(a[i][j]=='c') cc = p;
    		if(a[i][j]=='h') hh = p;
    		if(a[i][j]=='.' or a[i][j]=='a' or a[i][j]=='b' or a[i][j]=='c' or a[i][j]=='h'){
    			if(a[i][j-1]=='.' or a[i][j-1]=='a' or a[i][j-1]=='b' or a[i][j-1]=='c' or a[i][j-1]=='h') v[p].pb(p-1);
    			if(a[i][j+1]=='.' or a[i][j+1]=='a' or a[i][j+1]=='b' or a[i][j+1]=='c' or a[i][j+1]=='h') v[p].pb(p+1);
    			if(a[i-1][j]=='.' or a[i-1][j]=='a' or a[i-1][j]=='b' or a[i-1][j]=='c' or a[i-1][j]=='h') v[p].pb(p-(cd));
    			if(a[i+1][j]=='.' or a[i+1][j]=='a' or a[i+1][j]=='b' or a[i+1][j]=='c' or a[i+1][j]=='h') v[p].pb(p+(cd));
    		}
    	}
    }
    bfs(hh);
    //debug(dist[aa],dist[bb],dist[cc]);
    int cnt=max(dist[aa],max(dist[bb],dist[cc]));
    //for(int i=0 ; i<= (r)*(c) ; i++) if(vis[i]==1) cnt++;
    
    printf("%d\n", cnt);
    //cnt = 0;
    /*
    cout << "Adjacency List \n";
    for(int i=0 ; i <= r*c ; i++) {
    	cout <<i<<"-> ";
    	for(int j=0 ; j < v[i].size(); j++){
    		cout << v[i][j]<< " ";
    	}
    	cout << endl;
    }
    cout << "\n Grid view \n";
    for(int i=1;i<r-1;i++){
    	for(int j=1 ; j < c-1 ; j++){
    		cout << a[i][j];
    	}
    	cout <<endl; 
    }
    /*/
    
    
    

}

// Contact : chessdhiman@gmail.com

