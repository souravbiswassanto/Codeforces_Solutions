#include<bits/stdc++.h>
#define nl printf("\n");
#define N 200001
#define mp pair<ll,ll>
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d %d",&n,&m)
#define sfl(n) scanf("%lld", &n)
#define sfu(n) scanf("%llu", &n)
#define sffl(n, m) scanf("%lld %lld",&n,&m)
#define prn(n) printf("%d\n",n)
#define pf(n) printf("%d ",n)
#define pfl(n) printf("%lld ",n)
#define pfu(n) printf("%llu\n",n)
#define pfs(s) printf("%s",s)
#define pb push_back
typedef long long int ll;
typedef unsigned long long int ull;
using namespace std;
vector<int>v,v2,v3;
vector<int> :: iterator it1,it2;
int main()
{
    string ms="qwertyuiopasdfghjkl;zxcvbnm,./";
    string s;
    char ch;
    scanf("%c",&ch);
    cin>>s;
    if(ch=='R'){
        for(int i=0;s[i]!='\0';i++){
            int l=ms.find(s[i]);
            cout<<ms[l-1];
        }
    }
    else{
        for(int i=0;s[i]!='\0';i++){
            int l=ms.find(s[i]);
            cout<<ms[l+1];
        }
    }
///*****************************  ALHAMDULILLAH  *****************************/
}