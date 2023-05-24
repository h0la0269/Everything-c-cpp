//finding intersection in array
var nums1=[4,9,5];
var nums2=[9,4,9,8,4];

function intersection(n1,n2){
	const set= new Set(n1);
	return [...new Set(n2.filter(n=>set.has(n)))];
}

console.log(intersection(nums1,nums2));