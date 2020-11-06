#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

// simple code for insertion sort along with driver progrrma in c++

void insertion(vector<int> &v){

    int n = v.size();
    for (int i =1; i<n; i++){
        for ( int j = 0; j<i; j++){
            if(v[i]<v[j]){
                swap(v[i],v[j]);
            }
        }
    }

}


int main(){
    int n;
    cin>>n;
    vector<int> v;
    for (int t=0 ; t<n; t++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    insertion(v);
    for(int i = 0; i< v.size(); i++){
        cout<<v[i]<<" ";
    }


    return 0;
}