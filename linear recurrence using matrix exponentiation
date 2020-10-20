/* Recurrence relation f(i)=f(i-1) + 2f(i-2) + 4f(i-4)
which can alse be written as f(i)=f(i-1) + 2f(i-2) + 0f(i-3) + 4f(i-4)
thus making k=4 here*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<vector<ll> > matrix;
int k=4;

matrix mult(matrix A, matrix B)
{
    matrix C(k, vector<ll> (k));
    for(int i=0;i<k;i++)
        for(int j=0;j<k;j++)
            for(int l=0;l<k;l++)
                C[i][j]+=A[i][l]*B[l][j];
    return C;
}

matrix pow(matrix T, int p)
{
    if(p==1)
        return T;
    if(p%2)
        return mult(T, pow(T, p-1));
    matrix X=pow(T, p/2);
    return mult(X, X);
}

int main()
{
    int n;
    cin>>n;

    vector<ll> f{0,1,2,3};
    matrix T(k, vector<ll>(k));
    T[0][0]=0, T[0][1]=1, T[0][2]=0, T[0][3]=0;
    T[1][0]=0, T[1][1]=0, T[1][2]=1, T[1][3]=0;
    T[2][0]=0, T[2][1]=0, T[2][2]=0, T[2][3]=1;
    T[3][0]=4, T[3][1]=0, T[3][2]=2, T[3][3]=1;

    if(n==1)
    {
        cout<<1;
        return 0;
    }
    if(n==2)
    {
        cout<<2;
        return 0;
    }
    if(n==3)
    {
        cout<<3;
        return 0;
    }

    T = pow(T, n-k+1);

    //for(int i=0;i<k;i++)
    //    for(int j=0;j<k;j++)
    //        cout<<T[i][j]<<" ";
    //    cout<<endl;

    ll res=0;
    for(int i=0;i<k;i++)
    {
        res+=T[k-1][i]*f[i];
    }

    cout<<res<<endl;
}
