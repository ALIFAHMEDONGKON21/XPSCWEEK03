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
    
     int t;                  cin>>t;
    while(t--){
        int n;              cin>>n;
 
        map<char,ll>f_occ;
        map<char,ll>s_occ;
        map<string,ll>occ;
        vector<string>a(n);
        
        for(int i=0; i<=n-1; i++)
        {
            cin>>a[i];
            f_occ[a[i][0]]++;
            s_occ[a[i][1]]++;
            occ[a[i]]++;
        }
 
        ll ans=0;
 
        for(int i=0; i<=n-1; i++)
        {
            ll x=max((ll)0,f_occ[a[i][0]]-occ[a[i]]);
            ans+=x;
            x=max((ll)0,s_occ[a[i][1]]-occ[a[i]]);
            ans+=x;
            if(f_occ[a[i][0]]>0)f_occ[a[i][0]]--;
            if(s_occ[a[i][1]]>0)s_occ[a[i][1]]--;
            if(occ[a[i]]>0)occ[a[i]]--;
        }
 
        cout<<ans<<endl;
    }
    return 0;
}