class solution
{
  public:
  int dp[1001][1001];
  int solve(string s,string t,int m,int n)
  {
    if(n<=-1)
      return n+1;
    if(m<=-1)
      retun m+1;
    if(dp[m][n]!=-1)
      return dp[m][n];
    if(s[m]==t(n)
       return dp[m][n]=solve(s,t,m-1,n-1);
       int a=solve(s,t,m-1,n-1);
       int b=solve(s,t,m-1,n);
       int c=solve(s,t,m,n-1);
       return dp[m][n]=1+min(a,min(b,c));
       }
       int minDistance(string s,string t)
       {
         memset(dp,-1,sizeof(dp));
         int m=s.size();
         n=t.size();
         return solve(s,t,m-1,n-1);
       }
       };
