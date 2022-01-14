class Solution
{
  public:
  //DP
  int climbStairs(int n)
    vector<int> k(n+1,0);
  k[0]=1;
  for(int i=1;i<=n;i++)
  {
    k[i]+=k[i-1];
    if(i!=1)
      k[i]+=k[i-2];
  }
  return k[n];
}
};
