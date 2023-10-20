#include<bits/stdc++.h>
using namespace std;
#define     ll                              long long int
#define     ull                             unsigned long long int
#define     ui                              unsigned int
//STL :
#define     vi                              vector<int>
#define     vb                              vector<bool>
#define     vs                              vector<string>
#define     vl                              vector<ll>
#define     si                              set<int>
#define     sl                              set<ll>
#define     ip                              pair<int,int>
#define     lp                              pair<ll,ll>
#define     ips                             pair<string,int>
#define     lps                             pair<string,ll>
#define     ipc                             pair<char,int>
#define     lpc                             pair<char,ll>
#define     vip                             vector<ip>
#define     PQ                              priority_queue
#define     vlp                             vector<lp>
#define     hashmap                         unordered_map
#define     all(x)                          x.begin(),x.end()
#define     forI                             (i,s,n) for(int i=s; i<n; i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)
#define     cin_the_array(x,o,n)            for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_the_array(x,o,n)           for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<endl;



//......Let's Start ........................//



int main(){
    
    int t;                      cin>>t;
    while(t--){
        ll l,r,x;               cin>>l>>r>>x;
        ll a,b;                 cin>>a>>b;
 
        if(a==b){
            cout<<0<<endl;
            continue;
        }
 
        if(abs(b-a)>=x){
            cout<<1<<endl;
            continue;
        }
 
        if(b>a){
            if(b+x<=r or a-x>=l){
                cout<<2<<endl;
            }
            else if(a+x<=r and b-l>=x){
                cout<<3<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
        else{
            if(a+x<=r or b-x>=l){
                cout<<2<<endl;
            }
            else if(a-x>=l and r-b>=x){
                cout<<3<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
 
    }
    
    return 0;
}