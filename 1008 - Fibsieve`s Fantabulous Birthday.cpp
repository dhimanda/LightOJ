#include <bits/stdc++.h>
#define br break
#define elif else if
#define pb push_back
#define ppb pop_back
#define bs binary_search
using namespace std;
int main()
{
    #ifndef ONLINE_JUDGE
    //freopen("input.txt", "r", stdin);
   // freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin>>t;
    for(int i=1 ;i<=t ;i++)
    {
 
    unsigned long long int n, mid,uper,lower,col,row;
    long long c,f;
    cin >> n;
    c = ceil(pow(n,0.5));
    f = floor(pow(n,0.5));
    if(c==f){
        uper = c*c;
        lower = (c-1)*(c-1)+1;
    }
    else{
        uper = c*c;
        lower = f*f+1;
    }
    mid = (uper+lower)/2;
 
/// If C is ODD ------------
    if(c==f){
        if(n%2){
            col=1;
            row = c;
        }
        else{
            col = c;
            row = 1;
        }
    }
    else{
 
 
 
           if(c%2){
        if (n>mid){
            col = c-(n-mid);
            row = c;
        }
        else if(n<mid){
            col = c;
            row = c - (mid - n);
        }
        else {
            col = c;
            row = c;
        }
   }
   else{
        if (n<mid){
            col = c-(mid-n);
            row = c;
        }
        else if(n>mid){
            col = c;
            row = c - (n-mid);
        }
        else {
            col = c;
            row = c;
        }
   }
    }
 
 
 
 
  //  cout <<"Uper "<< uper << ' ' <<"Lower "<< lower<<endl;
    cout << "Case "<<i<<": "<<col << " " << row<<endl;
    }
    //main();
 
    return 0;
}
