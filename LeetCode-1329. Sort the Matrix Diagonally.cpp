class Solution {
public:
    vector<vector<int>> diagonalSort(vector<vector<int>>& mat) {
        // It's one kind of Bubble sort 
        //  an array need to be traversing n*n times for properly sorted
        // by normal traversing whole matrix we can compare and fix elements
        // and we will extend this traversing to m times by another loop ,so every diagonal will be m*m times traversed where m is matrix length ,diagonal length can be maximum m 
        // So , time complexity will be O (m*m*n),n is mat[i] length
        int n=mat.size();
        int m=mat[0].size();
        
        for(int times=0;times<n;times++)
            // it is for traversing again for making all diagonals bubbol sort 
        {
            //whole traversing by i and j
            for(int i=0;i+1<n;i++)
            {
                for(int j=0;j+1<m;j++)
                {
                    if(mat[i][j]>mat[i+1][j+1])
                    {
                        swap(mat[i][j],mat[i+1][j+1]);
                    }
                }
            }
        }
        return mat;
    }
};
