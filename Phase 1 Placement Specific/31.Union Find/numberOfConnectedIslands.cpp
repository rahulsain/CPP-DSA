 #include <bits/stdc++.h>
 using namespace std;

 /* question link ~ https://leetcode.com/problems/number-of-closed-islands/ */
bool possible(vector<vector<int>> &grid,int i,int j){
    if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size()){
        return false;
    }
        
    if(grid[i][j]==1){
        return true;
    }
        
    grid[i][j]=1;
    bool a=possible(grid,i+1,j) ;
    bool b=possible(grid,i,j+1);
    bool c=possible(grid,i-1,j);
    bool d=possible(grid,i,j-1); 
    if(a && b&& c && d){
        return true;
    }
    else
    return false;
}

int closedIsland(vector<vector<int>>& grid) {
    int ans=0;
        
    int n=grid.size();
    int m=grid[0].size();
        
        for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(grid[i][j]==0){
                    if(possible(grid,i,j)){
                        ans+=1;
                    }
            }
        }
    }
    return ans;
}

int main(){
    int n,m;
    cin>>n>>m;
    int z;
    vector<vector<int>> grid;
    vector<int> vec;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>z;
            vec.push_back(z);
        }
        grid.push_back(z);
    }

    cout<<closedIsland(grid)<<endl;

    return 0;
}