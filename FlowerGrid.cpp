#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter n"<<endl;
    cin>>n;
    vector<vector<char>>a(2*n,vector<char>(2*n,' '));
    for(int i=0;i<n;i++){
        for(int j=i;j<2*n-i;j++){
            a[i][j]=65+n-i-1;
            a[2*n-i-1][j]=65+n-i-1;
        }
    }
     for(int j=0;j<n-1;j++){
        for(int i=j+1;i<2*n-j-1;i++){
            a[i][j]=65+n-j-1;
            a[i][2*n-j-1]=65+n-j-1;
        }
    }
    for(int i=0;i<2*n;i++){
        for(int j=0;j<2*n;j++){
            cout<<a[i][j];
        }
        cout<<endl;
    }
    return 0;
}
