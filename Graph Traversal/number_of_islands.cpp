// Problem from GFG 

#include <bits/stdc++.h>
using namespace std;

int findIslands(vector<int> A[], int N, int M);

int main() {

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A[N];
        for (int i = 0; i < N; i++) {
            vector<int> temp(M);
            A[i] = temp;
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        cout << findIslands(A, N, M) << endl;
    }
    return 0;
}

bool issafe(int x,int y, int n, int m){
    if(x>=0 && x<n && y>=0 && y<m){
        return true;
    }
    return false;
}
void DFS(vector<int> A[],int n, int m, int N1, int M1,vector< vector<bool>> &visited) {
    int dx[8] = {-1,-1,-1,0,0,1,1,1};
    int dy[8] = {-1,0,1,-1,1,-1,0,1};
    
            if(!visited[n][m] && A[n][m]){
                visited[n][m] = true;
                for(int j=0;j<8;j++){
                if(issafe(n+dx[j],m+dy[j],N1,M1)){
                     DFS(A,n+dx[j],m+dy[j],N1,M1,visited);
                }
                }
            }
}

int findIslands(vector<int> A[], int N, int M) {
    // bool visited[N][M] = {false};
    vector<vector<bool>> visited(N,vector<bool>(M,false));
    int count = 0;
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(!visited[i][j] && A[i][j]){
                DFS(A,i,j, N, M, visited);
                count++;
               
            }
        }
    }
   return count; 
}
