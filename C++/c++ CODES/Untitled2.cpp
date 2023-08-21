#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
    int n,k;cin>>n>>k;
    int a[n];
    int ind;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    auto it=lower_bound(a,a+n,a[n-k]);
        ind=(a+n)-it;
        cout<<ind << endl;
}
}