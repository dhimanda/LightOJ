/// Coded by Dhiman Sarker Bappi (Dhimanda) - RMSTU 
// 1214 - Large Division
// Problem Link : http://lightoj.com/volume_showproblem.php?problem=1214

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   //freopen("input.txt","r",stdin);
   // freopen("output.txt","w",stdout);
    ll t;
    cin >> t;
    int k=0;
    while(t--){
        string a;
        cin >> a;
        if(a[0]=='-'){
            a[0]='0';
        }
        ll b;
        cin >> b;
        b = abs(b);
        ll full;
        if(a.size() <= 10){
            stringstream ok(a);
            ok >> full;
            if(full < b && full != 0){
                printf("Case %d: not divisible\n",++k);
                continue;
            }
        }


        string tmp="";
        ll rem = 0;
        ll num;
       // cout<<"Vagfol=";
        for(int i=0 ; i < a.size() ; i++)
        {
            char s = a[i];
            tmp += s;
            //cout<<tmp<<endl;
            stringstream geek(tmp);
            geek >> num;
          //  cout<<num<<endl;
            if(num >= b )
            {
                //cout<<num<< " "<<rem<<endl;
                //num += rem;
                //cout<<num/b;
                rem = num % b;
                //num = 0;
                stringstream ss;
                ss << rem;
                tmp = ss.str();
            }
        }
        //cout<<endl<<"rem="<<rem<<endl;

        if(rem==0) printf("Case %d: divisible\n",++k);
        else printf("Case %d: not divisible\n",++k);
    }
    return 0;
}
