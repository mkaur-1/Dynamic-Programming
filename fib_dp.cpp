//1.Top Down Approach
//Maintain a array for overlapping subproblems=>recursion + memoization

//2. Bottom UP Approach space and time complexity is O(n)
//dp[n+1]
//dp[0],dp[1]
//dp[i]=dp[i-1]+dp[i-2]
 int fib(int n)
 {
 int dp[100]={0};
 dp[1]=1;
 for(int i=2;i<=n;i++)
 {
 dp[i]=dp[i-1]+dp[i-2];
 }
 return dp[n];
 }
 //2. Bottom UP Approach space optimization O(l)
 int fib_space(int n)
 {
 if(n==0 or n==1){
 return n;
 }
 int a=0;
 int b=1;
 int c;
 for(int i=2;i<n;i++)
 {
 c=a+b;
 a=b;
 b=c;
 }
 return c;
 }
 
 
 int main()
 {
 int n;
 cin>>n;
 int dp[100]={0};
 cout<<fib(n)<<endl;
 return 0;
 }
