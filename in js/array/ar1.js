//Write a JavaScript function to get the last element of an array. Passing a parameter 'n' will return the last 'n' elements of the array.
function last (a, n){
	if(a==null)
		return void 0;
	if(n==null)
		return a[a.length-1];
	return a.slice(Math.max(a.length-n,0));

}

console.log(last([7, 9, 0, -2]));
console.log(last([7, 9, 0, -2],3));
console.log(last([7, 9, 0, -2],6));