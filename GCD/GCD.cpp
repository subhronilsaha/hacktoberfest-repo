#include <iostream>
using namespace std;
int p=0;
int gcd(int a,int b){
    
    while(a>0 and b>0){
        if (a>=b){
            a=a-b;
        }else if(b>a){
            b=b-a;
        }
        }
    if (a==0){
        p=b;
        return p;
    }else if (b==0){
        
        p=a;
        return p;
    }
    }


int main() {
	int a ,b,c;
	cin>>a>>b;
	c= gcd(a,b);
	cout<<c;
	return 0;
}