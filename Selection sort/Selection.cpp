#include<iostream>
#include<algorithm>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void selection(vector <int> &list){
    int e;
    e=list.size();
    for (int j=0;j<e-1;j++){
        int a=list[j];
        int y=list[j];
        int s=0;
        int t=0;
        for (int i=j;i<e;i++){
            if (list[i]<y){
                y=list[i];
                s=i;
                t+=1;
            }
        }
        if (t!=0){
             swap(list[j],list[s]);
        }
       
    }
    
    for (int j=0;j<e;j++){
        cout<<list[j]<<" ";
    }
}

int main(){
    vector <int> list ;
    int n;
    cin >>n;
    for (int j=0;j<n;j++){
        int x;
        cin>>x;
        list.push_back(x);
    }
    
    
    selection(list);
    return 0;
}