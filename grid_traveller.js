//Recursion
const gridTraveller=(m,n) =>
{
if(m===1 && n===1)
return 1;
if(m===0 && m===0)
return 0;
return gridTraveller(m-1,n)+gridtraveller(m,n-1);
};

console.log(gridTraveller(1,1));
console.log(gridTraveller(2,3));
console.log(gridTraveller(3,2));
console.log(gridTravller(18,18));

//Memoization
const gridTraveller=(m,n,memo={}) =>
{
  const key=m+','+n;
  if(key in memo)
    return memo[key];
  if(m===1 && n===1)
return 1;
if(m===0 && m===0)
return 0;
memo[key]= gridTraveller(m-1,n,memo)+gridtraveller(m,n-1,memo);
  return memo[key];
  console.log(gridTraveller(1,1));
console.log(gridTraveller(2,3));
console.log(gridTraveller(3,2));
console.log(gridTravller(18,18));

};
