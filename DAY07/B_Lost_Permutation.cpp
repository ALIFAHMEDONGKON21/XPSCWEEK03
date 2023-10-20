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

void sloved()
{
    ll m,s,sum=0, m1=0;
    cin>>m>>s;
    ll a[m];
    for(int i=0; i<m;i++)
    {
       cin>>a[i];
       m1=max(a[i],m1);
       sum+=a[i];
    }
    sum=(m1*(m1+1)/2 -sum);
    if(sum ==s)
    {
        cout<<"YES"<<endl;
        return;
    }
    for(int i=m1+1; i<=100000; i++)
    {
        sum+=i;
        if(sum ==s)
        {
            cout<<"YES"<<endl;
            return;
        }
        if(sum>s)
        {
            break;
        }
    }
    cout<<"NO"<<endl;

}

int main(){
    
    int t;
    cin>>t;

    while(t--)
    {
        sloved();
}
    
    return 0;
}