#include<bits/stdc++.h>
#include <algorithm>
#define nl printf("\n");
#define N 200001
#define mp pair<ll,ll>
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)
#define pfn(n) printf("%d\n",n)
#define pf(n) printf("%d ",n)
#define pfl(n) printf("%lld ",n)
#define pfln(n) printf("%lld\n",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define pb push_back
#define pi 3.1415926536
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
int dx[]= {0,0,1,1};
int dy[]= {1,1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;
int main()
{
    ///freopen("input.txt","r",stdin);
    int tcase=1;
    while(tcase--)
    {
        int n,ans=0,cnt=0,a,mi=9999,ma=-1,posi;
        sf(n);
        for(int i=0; i<n; i++)
        {
            sf(a);v.pb(a);
            if(a<=mi){
                mi=a;posi=i;
            }
            if(a>ma){
                ma=a;
            }
        }
        ans+=abs(n-(posi+1));
        for(int i=posi;i<n-1;i++){
            v[i]=v[i+1];
        }
        for(int i=0;i<n;i++){
            if(v[i]==ma){
                ans+=i;
                printf("%d\n",ans);return 0;
            }
        }
    }
///*****************************  ALHAMDULILLAH  *****************************/
}