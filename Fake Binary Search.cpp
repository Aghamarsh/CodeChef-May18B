#include <bits/stdc++.h>
using namespace std;
 
typedef long long ll;
 
int main() {
    
    ll t;
    cin>>t;
       
    for(ll i=0;i<t;i++)
    {
        ll n,m;
        cin>>n>>m;
        ll ar[n];
               
        std::vector<pair<ll,ll>> v;
        
       for(ll j=0;j<n;j++)
       {
            cin>>ar[j];
            v.push_back(make_pair(ar[j],j));
       }
       
       sort(v.begin(),v.end());
       ll b[n];
       
       for(ll j=0;j<v.size();j++)
           b[j]=v[j].first;
           
        for(ll j=0;j<m;j++)
        {
            ll lcount=0,mcount=0,ans;
            cin>>ans;
            
            ll start=0,stop=n-1;
            ll ind=-1;
            
            while(start<=stop)
            {
                ll mid=start+(stop-start)/2;
                
                if(b[mid]==ans){
                ind=mid;
                break;
                }
                else if(b[mid]<ans)
                start=mid+1;
                else
                stop=mid-1;
            }
            
            //cout<<"index in b:"<<ind<<endl;
            
            ll les=ind;
            ll mor=n-les-1;
            //ll temp[2]={les,mor};
            
            ind=v[ind].second;
            //cout<<"index in a:"<<ind<<endl;
            
            start=0;
            stop=n-1;
            
            while(start<=stop)
            {
                ll mid=start+(stop-start)/2;
                
                if(ar[mid]==ans){
                     break;
                }
                else if(mid<ind){
                    start=mid+1;
                    les--;
                    
                    if(ar[mid]>ar[ind])
                    mcount++;
                }
                else{
                    stop=mid-1;
                    mor--;
                    
                    if(ar[mid]<ar[ind])
                    lcount++;
                }
            }
            
            
                if(les>=0 && mor>=0)
                {
                    if(lcount>=mcount)
                    {
                        cout<<lcount<<endl;
                    }
                    else
                    cout<<mcount<<endl;
                }
                else
                cout<<-1<<endl;
        }
    }
}