#include <bits/stdc++.h>
using namespace std;

#define sd(x) 		scanf("%d",&x)
#define su(x) 		scanf("%u",&x)
#define slld(x) 	scanf("%lld",&x)
#define sc(x) 		scanf("%c",&x)
#define ss(x) 		scanf("%s",x)
#define sf(x) 		scanf("%f",&x)
#define slf(x)		scanf("%lf",&x)
#define ll 			long long int
#define mod(x,n) 	(x+n)%n
#define pb          push_back
#define mp          make_pair
#define pii         pair<int,int>
#define vi          vector<int>
#define all(a)      (a).begin(),(a).end()
#define F           first
#define S           second
#define sz(x)       (int)x.size()
#define Mod         1000000007

bool isthere[26];
char S[1007];

int main()
{
	// freopen("input_file_name.in","r",stdin);
	// freopen("output_file_name.out","w",stdout);

	int i,j,k,l,m,n,x,y,z,a,b,r;
	// ll i,j,k,l,m,n,x,y,z,a,b,r;

	ss(S); n = strlen(S);
	sd(k);

	for(a=0,i=0;i<n;i++)
	{
		if(!isthere[S[i]-&#39;a&#39;])
		{
			a++;
			isthere[S[i]-&#39;a&#39;] = true;
		}
	}

	if(a>=k)
		printf("0\n");
	else if(k>n)
		printf("impossible\n");
	else
		printf("%d\n", k-a );

	return 0;
}