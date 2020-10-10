vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int originalcolor = image[sr][sc]; 
        if(newColor==originalcolor) return image;
        fillcolour(image,sr,sc, originalcolor, newColor);
        return image;
    }
  
  
  void fillcolour(vector<vector<int>>& image, int sr, int sc,int orginalcolor, int newColor){
        int m = image.size();
        int n = image[0].size();
        if (sr<0 || sr>=m || sc<0 || sc>=n || image[sr][sc] != orginalcolor){
            return;
        }
        image[sr][sc] = newColor;
        fillcolour(image, sr-1, sc, orginalcolor, newColor);
        fillcolour(image, sr+1, sc, orginalcolor, newColor);
        fillcolour(image, sr, sc-1, orginalcolor, newColor);
        fillcolour(image, sr, sc+1, orginalcolor, newColor);
    }
