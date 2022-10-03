/*
    Sk arman Hossain
    University of Barisal

    Problem :
    Solution :
    Date:
 */

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#include <ext/pb_ds/assoc_container.hpp> // Common file
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag,tree_order_statistics_node_update> ordered_set;

#define sf(n) scanf("%lld",&n);
#define YES cout<<"YES\n";
#define NO cout<<"NO\n";
#define nl cout<<"\n";
#define PB push_back
#define VST(V) sort(V.begin(),V.end())
#define VSTrev(V) sort(V.begin(),V.end(),greater<long long int>())
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define  base1 129
#define  base2 137
#define  MOD1  1479386893
#define  MOD2  1928476349
#define MAX 2000010
#define T(n) printf("test : %d\n",n);
ll dx[]= {1,-1,0,0,1,-1,-1,1};
ll dy[]= {0,0,1,-1,1,1,-1,-1};
ll knx[]= {2,2,1,-1,-2,-2,1,-1};
ll kny[]= {1,-1,2,2,1,-1,-2,-2};
ll ck;
ll child[30];
ll cnt=0;
void dfs(ll node,ll srch)
{
    cnt++;
    if(node==srch)
    {
        ck=0;
        return;
    }
    if(child[node]!=-1)
    {
        dfs(child[node],srch);
    }
}
int main()
{
    //freopen("1input.txt","r",stdin);
    //freopen("1output.txt","w",stdout);
    fast;
    ll tcase=1;
    cin>>tcase;
    for(ll test=1; test<=tcase; test++)
    {

        ll n;
        cin>>n;
        string t,s;
        cin>>t;
        map<ll,ll>mp;
        ll ar[30];
        for(ll i=0; i<=26; i++)
        {
            ar[i]=0;
            child[i]=-1;
        }
        for(ll i=0; i<n; i++)
        {
            if(mp.count(t[i]-'a'))
            {
                s+=(char)(mp[t[i]-'a']+'a');
            }
            else
            {
                ll val=t[i]-'a';
                for(ll j=0; j<26; j++)
                {
                    ck=1;
                    cnt=0;
                    if(ar[j]==0)
                    {
                        dfs(val,j);
                        //cout<<ck<<" "<<val<<" "<<j<<" x\n";
                        if(ck||cnt>25)
                        {
                            mp[val]=j;
                            child[j]=val;
                            ar[j]=1;
                            break;
                        }
                    }

                }
                s+=mp[val]+'a';
            }
        }
        cout<<s<<"\n";


    }
    return 0;
}