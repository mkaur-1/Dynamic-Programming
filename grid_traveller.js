const gridTraveller=(m,n) =>
{
if(m===1 && n===1)
return 1;
if(m===0 && m===0)
return 0;
return gridTraveller(m-1,n)+gridtraveller(m,n-1);
};

console.log(gridTraveller(1,1));
console.log(gridTraveller(2,2));
console.log(gridTraveller(3,3));
console.log(gridTravller(18,18));
