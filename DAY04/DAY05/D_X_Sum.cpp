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
#define     in_range(i,x,y)                 for(int i=x;i<=y;i++)
#define     in_range_back(i,x,y)            for(int i=y;i>=x;i--)
#define     cin_the_array(x,o,n)            for(int i=o;i<=n;i++){cin>>x[i];}
#define     cout_the_array(x,o,n)           for(int i=o;i<=n;i++){cout<<x[i]<<" ";}cout<<endl;



//......Let's Start ........................//
int a[222][222];

ll Call(int x,int y,int n,int m){
    ll res=0;
    int indx=0;
    while(x-indx>-1 and y-indx>-1){
        res+=a[x-indx][y-indx];
        indx++;
    }
    indx=0;
    while(x-indx>-1 and y+indx<m){
        res+=a[x-indx][y+indx];
        indx++;
    }
    indx=0;
    while(x+indx<n and y+indx<m){
        res+=a[x+indx][y+indx];
        indx++;
    }
    indx=0;
    while(x+indx<n and y-indx>-1){
        res+=a[x+indx][y-indx];
        indx++;
    }
 
    return res-3*(a[x][y]);
}

int main(){
    
    int t;                
    cin>>t;
    while(t--){
        int n,m;           
        cin>>n>>m;
        in_range(i,0,n-1){
            in_range(j,0,m-1){
               cin>>(a[i][j]);
            }
        }
        ll ans=0;
        in_range(i,0,n-1){
            in_range(j,0,m-1){
                ans=max(ans,Call(i,j,n,m));
            }
        }
        cout<<ans<<endl;
    }
    return 0;
    
    return 0;
}