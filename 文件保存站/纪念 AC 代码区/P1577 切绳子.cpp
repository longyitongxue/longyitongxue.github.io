#include<bits/stdc++.h>
using namespace std;
double a[int(5e5+5)];
int n,k;
bool check(double x){
    int cnt=0;
    for(int i=1;i<=n;i++){
        cnt+=a[i]/x;
    }
    return cnt>=k;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr),cout.tie(nullptr);
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    double l=-0.01,r=100000.01;
    while(r-l>0.009){
        double mid=l+(r-l)/2.0;
        if(check(mid))l=mid;
        else r=mid;
    }
    cout<<l;
    return 0;
}
