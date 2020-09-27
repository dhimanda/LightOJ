/// Coded by Dhiman Sarker Bappy (Dhimanda) - RMSTU
 
#include<bits/stdc++.h>
using namespace std;
#define in_file freopen("input.txt", "r", stdin)
#define out_file freopen("output.txt", "w", stdout)
#define    F    first
#define    S    second
#define    pb    push_back
#define    popb    pop_back
#define    pf    push_front
#define    popf    pop_front
#define    lcm(a,b)    (a*b)/gcd(a,b)
#define    gcd(a,b)    __gcd(a,b)
#define    pi    2*acos(0)
#define    elif    else if
#define    ll    long long
int Int(){int x;scanf("%d", &x);return x;}
#define Int Int()
#define mx 100010
int arr[mx];
int tree[mx*4];
void init(int node,int b,int e){
    if(b==e){
        tree[node]=arr[e];
        return;
    }
    int lft = node *2;
    int rgt = lft + 1;
    int mid = (b+e)/2;
    init(lft,b,mid);
    init(rgt,mid+1,e);
    tree[node] = min(tree[lft],tree[rgt]);
}
 
int q(int node,int b,int e,int l,int r){
    if(l > e | r < b){
        return mx;
    }
    if(b >= l && e<=r){
        return tree[node];
    }
    int lft = node *2;
    int rgt = lft + 1;
    int mid = (b+e)/2;
    int x = q(lft,b,mid,l,r);
    int y = q(rgt,mid+1,e,l,r);
    return min(x,y);
}
 int main()
{
    //in_file;
    //out_file;
    int t=Int;
    int kase = 0;
    while(t--){
        vector <ll> v;
        v.clear();
 
        ll p=Int, l=Int;
        ll tmp = p-l;
        printf("Case %d:" , ++kase);
        if(tmp <= l) printf(" impossible\n");
        else {
            int sq = sqrt(tmp);
            for(int i = 1 ; i <= sq ; i++){
                if(tmp % i == 0){
                    ll vagfol = tmp/i;
                    if(vagfol > l) v.pb(vagfol);
                    if (i > l && vagfol != i) v.pb(i);
                }
            }
            sort(v.begin(),v.end());
            for(int i=0 ; i < v.size(); i++){
                printf(" %lld" ,v[i]);
            }
            printf("\n");
        }
 
    }
    return 0;
}
 
