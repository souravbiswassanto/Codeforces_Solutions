#include<bits/stdc++.h>
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
#define yes printf("YES\n")
#define no printf("NO\n")
#define pb push_back
#define pi 3.1415926536
#define vst(v) sort(v.begin(),v.end())
#define fori(n) for(int i=0;i<n;i++)
#define fast ios_base::sync_with_stdio(0);cin.tie(0)
int dx[]= {0,0,1,-1};
int dy[]= {1,-1,0,0};
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<ll>v,v2,v3;
vector<ll> :: iterator it1,it2;
int main()
{
    ///freopen("input.txt","r",stdin);
    ll tcase=1;
    //sf(tcase);
    while(tcase--)
    {
        ll n,ans,a,ans2,tmp,ck1=0,ck2=0;
        sfl(n);
        char s[20000];
        scanf("%s",s);
        for(int i=0;i<n;i++){
            if(s[i]=='0')
                ck1++;
            else
                ck2++;
        }
        if(ck1==ck2){
            printf("2\n");
            char ch=s[n-1];
            s[n-1]='\0';
            printf("%s %c\n",s,ch);
        }
        else{
            printf("1\n%s\n",s);
        }

       // printf("%lld\n",ans);
    }
///*****************************  ALHAMDULILLAH  *****************************/
}