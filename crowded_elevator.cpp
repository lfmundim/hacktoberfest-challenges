#include <bits/stdc++.h>
using namespace std;
#define fr(i,n) for(i=0;i<n;i++)
int gf[100000];
int i;
int cmp(const void *a,const void *b){return (*(int*)b - * (int*)a );}

int main() {
    	int t, n, c, m, r;

	cin>>t;
	while(t--) {
		r = 0;
	cin >> n >> c >> m;
		fr (i,m)
			scanf("%d", &gf[i]);
		qsort(gf, m, sizeof (int), cmp);

		for(int i = 0; i < m; i += c)
			r += gf[i] * 2;

		printf("%d\n", r);
	}
	return 0;
}
