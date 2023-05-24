//removing elements from an array

var removeElement = function(nums, val) {

    let n  = nums.filter((item)=>item !== val)
    nums.splice(0,nums.length,...n)
    
    return n.length

};

var arr=[0,1,2,2,3,0,4,2];
console.log(`Original Array:  ${arr}`);
removeElement(arr,0)
console.log(`Modified array after removing all 0's:  ${arr}`);
