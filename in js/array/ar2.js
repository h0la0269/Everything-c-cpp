//finding most frequent element in an array
function mostFrequent(ar,n){
	if(n==1)
		return ar[n-1];
	let curr=1,max=1,res=ar[0];
	for(let i=1;i<n;i++){
		if(ar[i]==ar[i-1])
			curr++;
		else
			curr=1;
		if(curr>max){
			max=curr;
			res=ar[i-1];
		}
	}
	return res;
}


let arr = [40,50,30,40,50,30,30];
let n = arr.length;
console.log(mostFrequent(arr,n));
//time complexity: O(nlogn)
