class stack{
	constructor(){
		this.arr=[];
	}
	push(element)
	{
		this.arr.push(element);
	}
	isEmpty()
	{
		return this.arr.length==0;
	}

	pop()
	{
		if(this.arr.length==0)
			return 'underflow';
		return this.arr.pop();
	}
	peek()
	{

		return this.arr[this.arr.length-1];
	}
};


var s=new stack;
console.log('is stack empty?\n'+s.isEmpty())
s.push(10);
s.push(20);
s.push(30);

console.log('Popping the top element and viewing the top element')
console.log(s.pop())
console.log(s.peek())
console.log('popping again\n')
console.log(s.pop())
console.log('After popping\n'+s.peek())
