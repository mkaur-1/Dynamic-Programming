
//c[0,0]
d[0,0]=(-1,-1)
//can only move up
d[r,0]=(r-1,0)
//can only move right
reward[0,c]=d[0,c-1]


recursive case:
 for r-1 to m-1
     for c=1...n-1
         if reward [r-1,c]>reward[r,c-1])
             then d[r,c]=(r-1,c)
             else
             d[r,c]=(r,c-1)
             
   return d
