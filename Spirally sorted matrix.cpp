#include<iostream>
#define n 4
using namespace std;
 int findRing(int arr[][n],int x)
 {
   if(arr[0][0]>x)
     return -1;
   int l=0,r=(n+1)/2-1;
   if(n%2==1 && arr[r][r]<x)
     return -1;
   if(n%2==0 &&arr[r+1][r]<x)
     return -1;
   
   while(l<r)
   {
     int mid=(l+r)/2;
     if(arr[mid][mid]<=x)
       if(mid==(n+1)/2-1 || arr[mid+1][mid+1]>x)
         return mid;
     else
       l=mid+1;
     else
       r=mid-1;    
   }
   return r;
 }
   
int binarysearchrowInc(int arr[][n],int row,int l,int r,int x)
{
  while(l<=r)
  {
    int mid=(l+r)/2;
    if(arr[row][mid]==x)
      return mid;
    if(arr[row][mid]<x)
      l=mid+1;
    else 
      r=mid-1;
  }
  return -1;
}
int binarysearchcolumnDec(int arr[][n],int col,int t,int b,int x)
{
  while(t<=b)
    int mid=(t+b)/2;
   if(arr[mid][col]==x)
     return mid;
  if(arr[mid][col]<x)
    b=mid-1;
  else
    t=mid+1;
}
return -1;
}
void spiral_binary(int arr[][n],int x)
{
  int f1=findRing(arr,x);
  int r,c;
  if(f1==-1)
  {
    cout<<"-1";
    return;
  }
  
  if(n%2==1 && f1==(n+1)/2 -1)
  {
    cout<<f1<<" "<<f1<<endl;
    return;
  }
  if(x<arr[f1][n-f1-1])
  {
    c=binarysearchrowinc(arr,f1,f1,n-f1-2,x);
    r=f1;
  }
  else if(x<arr[n-f1-1])
  {
    c=binarysearchrowinc(arr,f1,f1,n-f1-2,x);
    r=f1;
  }
  else if(x<arr[n-f1-1])
  {
    c=binarysearchrowinc(arr,f1,f1,n-f1-2,x);
    r=f1;
  }
  else if(x< arr[n-f1-1][n-f1-1])
  {
    c=n-f1-1;
    r=binarysearchcolumninc(arr,f1,f1,n-f1-2,x);
    r=f1;
  }
  else if(x<arr[n-f1-1][n-f1-1])
  {
    c=n-f1-1;
    r=binarysearchcolumninc(arr,n-f1-1,f1,n-f1-2,x);
  }
  else if(x<arr[n-f1-1][f1])
  {
    c=binarysearchrowdec(arr,n-f1-1,f1+1,n-f1-1,x);
    r=n-f1-1;
  }
  else
  {
    r=binarysearchcolumndec(arr,f1,f1+1,n-f1-1,x);
    r=n-f1-1;
  }
  else
  {
    r=binarysearchcolumndex(arr,f1,f1+1,n-f1-1,x);
    c=f1;
  }
  if(c==-1||r==-1)
    cout<<"-1";
  else
    cout<<r<<" "<<c;
  return;
}
//driver code
int main()
{
  
  
  int arr[][n]={
    {1,2,3,4},
    {12,13,14,15},
    {5,6,7,8},
    {16,17,18,19}};
  spiralBinary(arr,7);
  return 0;
}

    
    
  
  
  
  
  
  
    
  
    
