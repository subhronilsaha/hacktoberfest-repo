// Problem from gfg
// comparator function to sort on the basis of finish time

bool mycmp(pair<int,int> p1, pair<int,int> p2){
    return (p1.second<p2.second);
}

int activitySelection(int start[], int end[], int n){

pair<int,int> p[n];
int count = 1;
int prev = 0;
for(int i=0;i<n;i++){
    // p[i] = make_pair(start[i],end[i]);
    p[i].first = start[i];
    p[i].second = end[i];
}
sort(p,p+n,mycmp);

for(int curr=1;curr<n;curr++){
    if(p[prev].second<=p[curr].first){
        count++;
        prev = curr;
    }
}
return count;
}
