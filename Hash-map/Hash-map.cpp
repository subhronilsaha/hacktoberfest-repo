#include <bits/stdc++.h>

using namespace std;

//a medium level question of codechef
// question code - CSS2
// simple solution using c++ maps and pairs 

int main()
{
    int n,ma;
    cin>>n>>ma;
    map<pair<int,int>, pair<int,int>> m;
    map<pair<int,int>,pair<int,int>>::iterator it;
    for(int j=0;j<n;j++){
        int i,a,v,p;
        pair<int,int> p11;
        pair<int,int> p22;
        
        cin>>i>>a>>v>>p;

        p11.first=i;
        p11.second=a;
        p22.first=v;
        p22.second=p;

        if (m.find(p11)!=m.end()){
            it=m.find(p11);
            if((it->second.second)<=p){it->second=p22;}
        }
        else{m.insert({p11,p22});}        
    }
    for(int j=0;j<ma;j++){
        int i1,a1;
        cin>>i1>>a1;
        pair<int,int> p12;
        
        p12.first=i1;
        p12.second=a1;

        it=m.find(p12);
        cout<<(it->second).first<<"\n";

    }
    return 0;

}