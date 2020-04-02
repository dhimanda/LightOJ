/// Coded by Dhiman Sarker Bappy (Dhimanda) - RMSTU
// Problem Link : http://lightoj.com/volume_showproblem.php?problem=1212

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
    //freopen("output.txt", "w", stdout);
    #endif
    int t;
    cin >> t;
    int cse = 0;
    while(t--){
        cout<<"Case "<<++cse<<":"<<endl;
        int n,m;
        cin >> n >> m ;
        int c=0;
        deque<int> d;
        while(m--){
            string s;

            cin >>s;
            if(s == "pushLeft"){
               int tmp;
               cin >>tmp;

              // cout << "Size = "<<d.size()<<" N = "<<n<<endl;
               if(d.size() == n) {
                    cout<<"The queue is full"<<endl;
               }
               else{
                cout<<"Pushed in left: "<<tmp<<endl;
                d.push_back(tmp);
               }

            }
            else if(s == "pushRight"){
               int tmp;
               cin >>tmp;
               if(d.size() == n) {
                    cout<<"The queue is full"<<endl;
               }
               else{
                    cout<<"Pushed in right: "<<tmp<<endl;
                    d.push_front(tmp);
               }
            }
            else if(s == "popLeft") {

                if(d.empty()) {
                    cout << "The queue is empty"<<endl;
                        }
                else{
                    cout<<"Popped from left: "<<d.back()<<endl;
                    d.pop_back();
                }
            }
            else if(s == "popRight") {

                if(d.empty()) cout << "The queue is empty"<<endl;
                else {
                    cout<<"Popped from right: "<<d.front()<<endl;
                    d.pop_front();
                }
            }


        }

        d.clear();


    }

    return 0;
}

/// contact : chessdhiman@gmail.com
