#include<bits/stdc++.h>
using namespace std;

    bool positive(int x){
        return x>0;
    }
    bool negative(int x){
        return x<0;
    }

int main(){
    int n;cin>>n;
    vector<int>a(n);

    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
   
    replace_if(a.begin(),a.end(),positive,1);
    replace_if(a.begin(),a.end(),negative,2);

    for (int i = 0; i < n; i++){
        cout<< a[i] <<" ";
    }
      
    return 0;
}