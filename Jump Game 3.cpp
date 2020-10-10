  bool dfs(int node, int& n, vector<int>&arr, vector<bool>&visited)
    {
        if(node<0 || node>=n) return false;
        
        if(visited[node]) return false;
        
        
        if(arr[node]==0) return true;
        
     
        visited[node] = true;
        
     
        return dfs(node+arr[node],n,arr,visited) || dfs(node-arr[node],n,arr,visited);
    }
    
    bool canReach(vector<int>& arr, int start) {
        
       
        int n = arr.size();
        
      
        vector<bool>visited(n,false);
        
        return dfs(start,n,arr,visited);
    }
};
