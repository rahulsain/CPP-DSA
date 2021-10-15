 #include <bits/stdc++.h>
 using namespace std;

 /* question link ~ https://leetcode.com/problems/number-of-provinces */
 void dfs(vector<vector<int>> &graph,bool visited[],int index){
        if(visited[index]==true){
            return ;
        }
        
        visited[index]=true;
        for(int i=0;i<graph.size();i++){
            if(graph[index-1][i] && i!=index-1){
                dfs(graph,visited,i+1);
            }
        }
        
        return ;
    }
int findCircleNum(vector<vector<int>>& isConnected) {
    int n=isConnected.size();
        
    bool visited[n+1];
    memset(visited,false,sizeof(visited));
        
        
    int ans=0;
    for(int i=1;i<=n;i++){
        if(visited[i]==false){
            ans+=1;
            dfs(isConnected,visited,i);
    }
    }
        
    return ans;
        
}

int main(){
    int n,m;
    cin>>n>>m;
    int z;
    vector<vector<int>> connected;
    vector<int> vec;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>z;
            vec.push_back(z);
        }
        connected.push_back(z);
    }

    cout<<findCircleNum(connected)<<endl;

    return 0;
}