#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>
using namespace std;
int a[100003];
int main(){
	int t;scanf("%d",&t);
	while(t--){
		memset(a,0,sizeof(a));
		int n;scanf("%d",&n);
		for(int i=1;i<=n;i++) scanf("%d",&a[i]);
		sort(a+1,a+1+n);
		for(int k=(n+1)/2,i=0;i<n;i++){
			if(i&1){
				printf("%d ",a[k+i]);
				k+=i; 
			}
			else{
				printf("%d ",a[k-i]);
				k-=i;
			}
		}
	}
	return 0;
} 
