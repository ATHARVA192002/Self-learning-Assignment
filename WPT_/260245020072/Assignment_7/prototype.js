Object.prototype.print = function(...s)
{
	console.log("Prototype Addition :"+ s);
}

Object.prototype.display = function(a)
{
    let sum = a+a
	console.log("Prototype display :" + sum);
}

let b = {
	
	value : 20,
	
	print2(){
		console.log("Value :" + this.value);
	}
}
	
let d = {
	
	value1 : 30,
	
	display1(){
		console.log("Value :" + this.value1);
	}
}
	
b.print(100,200);
d.display1();
d.display(50);

b.print2();
	

