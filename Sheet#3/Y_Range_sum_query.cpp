#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;cin>>n>>q;
    vector<long long int>a(n+1);
    for (int i = 1; i <= n; i++)//-- O(N)
    {
        cin>>a[i];
    }

    vector<long long int>pre(n+1);
    pre[1]=a[1];
    for (int i = 2; i <=n; i++)//-- O(N)
    {
        pre[i]=pre[i-1]+a[i];
    }
    
    while (q--)//-- O(q)
    {   
        long long int sum;
        int l,r;cin>>l>>r;
        if(pre[l]==1){
            sum=pre[r];
        }else{
            sum = pre[r]-pre[l-1];
        }
        cout<<sum<<endl;
    }
     
    return 0;
}