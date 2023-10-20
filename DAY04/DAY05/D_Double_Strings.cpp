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



int main(){
    
    int t;                  cin>>t;
    while(t--){
        int n;              cin>>n;
        vs a(n);            cin_the_array(a,0,n-1);
 
        map<string,int> freq;
        in_range(i,0,n-1){
            freq[a[i]]++;
        }
 
        string ans(n,'0');
 
        in_range(i,0,n-1){
            if(a[i].size()==1)continue;
 
 
            in_range(j,0,a[i].size()-2){
                string x="",y="";
                in_range(k,0,j){
                    x.push_back(a[i][k]);
                }
                in_range(k,j+1,a[i].size()-1){
                    y.push_back(a[i][k]);
                }
                if(x==y){
                    if(freq[x]>0){
                        ans[i]='1';
                        break;
                    }
                }
                else{
                    if(freq[x]>0 and freq[y]>0){
                        ans[i]='1';
                        break;
                    }
                }
                if(ans[i]=='1')break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;

    
    return 0;
}