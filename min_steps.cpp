#include<iostream>
#include<climits>
using namespace std;
int min_steps(int n,int dp[])
{
  if(n==1)
  {
    return 0;
  }
  if(dp[n]!=0)
  {
    return dp[n];
  }
  int op1,op2,op3;
  op1=op2=op3=INT_MAX;
  if(n%3==0)
  {
    op1=min_steps(n/3,dp)+1;
}
  if(n%2==0)
  {
    op2=min_steps(n/2,dp)+1;
  }
  op3=min_steps(n-1,dp) +1;
  int ans=min(min(op1,op2),op3);
  return dp[n]=ans;
int main()
{
  int n;
  cin>>n;
  int dp[100]={0};
  cout<<min_steps(n,dp);
  return 0;
}
