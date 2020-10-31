#include<bits/stdc++.h>
#define ll long long int
#define vi vector<int>
#define vvi vector<vi >
#define vll vector<ll >
#define vvll vecotr<vll >
#define vl vector<ll> 
#define vvl vector<vl >
#define loop(first_one, k) for(long long first_one = 0; first_one < k; first_one++)
#define _input(arr, NN) loop(ii, NN)cin>>arr[ii];
#define input2(arr, NN, MM) loop(ii, NN)loop(jj, MM)cin>>arr[ii][jj]
#define ini(arr, N) loop(ii, N)scanf("%d", &arr[ii]);
#define inl(arr, N) loop(ii, N)scanf("%ld", &arr[ii]);
#define ini2(arr, N, M) loop(ii, N)loop(jj, M)scanf("%d", &arr[ii][jj]);
#define inl2(arr, N, M) loop(ii, N)loop(jj, M)scanf("%ld", &arr[ii][jj]);
#define pii pair<int, int> 
#define pll pair<ll, ll>
#define ff first
#define ss second
#define push_back push_back

using namespace std;


int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);

    int T;

    cin>>T;

    while(T--)

    {
        int N, M;
        cin>>N>>M;
        int arr[N];
        bool met_1[N][N];

        for(int i = 0; i < N; i++)

            for(int j = 0; j < N; j++)

                met_1[i][j] = false;

        for(int k = 0; k < N; k++)
        {
            cin>>arr[k];
            arr[k]--;
        }
        int first_one, second_one;

        for(int m = 0; m < M; m++)

        {   
            cin>>first_one>>second_one;
            met_1[first_one-1][second_one-1] = met_1[second_one-1][first_one-1] = true;
        }
        int con = 0;
        int herd[N] = {0};

        bool visit[N];

        memset(visit, false, sizeof(visit));

        for(int k = 0; k < N; k++)
        {
            if(!visit[k])
            {
                con++;
                queue<int> q;
                q.push(k);
                visit[k] = true;
                herd[k] = con-1;
                while(!q.empty())
                {
                    int u = q.front();
                    q.pop();
                    for(int ans2 = 0; ans2 < N; ans2++)
                    {
                        if(!visit[ans2] && met_1[u][ans2])
                        {
                            visit[ans2] = true;
                            herd[ans2] = con-1;
                            q.push(ans2);
                        }
                    }
                }
            }
        }



        int same_c[con][con];
        
        for(int i = 0; i < con; i++)
            for(int j = 0; j < con; j++)
                same_c[i][j] = 0;

        for(int k = 0; k < N; k++)
            same_c[herd[k]][herd[arr[k]]]++;
        
        for(int k = 0; k < con; k++)
            same_c[k][k]=0;
        
        int ans = 0;
        
       

        for(int k = 0; k < N; k++)
        {
            
            for(int i = 0; i < con; i++)
            {
                for(int j = 0; j < con; j++)
                {
                    if(same_c[i][j] > 0 && i!=j)
                    {
                        
                        bool visit[con];
                        memset(visit, false, sizeof(visit));
                        vector<int> f1;
                        f1.push_back(i);
                        visit[i] = true;
                        bool flag = false;
                        int same_break;
                        while(!f1.empty())
                        {
                            flag = true;
                            int u = f1.back();
                            for(int vk = f1.size()-1; vk >= 0; vk--)
                            {
                                if(same_c[u][f1[vk]] > 0)
                                {
                                    flag = false;
                                    same_break = f1[vk];
                                    break;
                                }
                            }
                            if(flag)
                            {
                                for(int ans2 = 0; ans2 < con; ans2++)
                                {
                                    if(same_c[u][ans2] > 0)
                                    {
                                        if(!visit[ans2])
                                        {
                                            f1.push_back(ans2);
                                            visit[ans2] = true;
                                            break;
                                        }
                                        if(visit[ans2])
                                        {
                                            same_break = ans2;
                                            break;
                                        }
                                    }
                                }
                            }
                            if(f1.back()==u)
                            {
                                break;
                            }
                            assert(!f1.empty());
                        }
                        int ans2 = same_break;
                        while(!f1.empty() && f1.back() != same_break)
                        {
                            int u = f1.back();
                            same_c[u][ans2]--;
                            ans++;
                            f1.pop_back();
                            ans2 = u;
                        }
                        assert(f1.back() == same_break);
                        same_c[same_break][ans2]--;
                    }
                }
            }
        }
        
    cout <<ans<< "\n";
    
    }
    
    return 0;
}