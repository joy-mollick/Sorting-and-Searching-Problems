class Solution {
    int n,m;
    public int maxSideLength(int[][] mat, int threshold) {
          n=mat.length;
          m=mat[0].length;
        int[][] sum=new int[n+1][m+1];
        // sum[i][j] states the summation of all numbers of grid (1,1) to (i,j)
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=m;j++)
            {
                sum[i][j]=sum[i-1][j]+sum[i][j-1]-sum[i-1][j-1]+mat[i-1][j-1];
                // sum[i-1][j] all numbers from (1.1) to (i-1,j) right up of (i,j)
                // sum[i][j-1] all numbers from (1.1) to (i,j-1) left to (i,j)
                // Both contains sum[i-1][j-1] so, it overcounts remove it once time 
                // Now add mat[i][j] .
            }
        }
        
        int left = 0, right = Math.min(m, n);
        int ans=right;
        while (left <= right) 
        {
            int mid = (left + right) / 2;
            if (sde_sum_lssthan(sum, threshold, mid)) {
                left = mid + 1;  
                ans=mid;
            } else {
                right = mid - 1;
            }
        }
        
        return ans;
    }
    
    boolean sde_sum_lssthan(int[][]sum,int threshold,int side)
    {
        for(int i=side;i<=n;i++)
        {
            for(int j=side;j<=m;j++)
            {
int sm_of_squar_of_sd=sum[i][j]-(sum[i-side][j]+sum[i][j-side]-sum[i-side][j-side]);
                // square sum of length of side 
                if(sm_of_squar_of_sd<=threshold) return true;
            }
        }
        return false;
    }
    
}
