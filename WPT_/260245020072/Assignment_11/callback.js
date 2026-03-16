function add(a,b){
	return "addition: " + (a+b)
}

function sub(a,b){
	return "subtraction: " + (a-b)
}

function mul(a,b){
	return "multiplication: " + (a*b)
}

function div(a,b){
		var d = a/b
		return "division: " + (d)

}

function result(a,b,callback){
	return callback(a,b)
}
  
console.log(result(20,10,add))
console.log(result(20,10,sub))
console.log(result(20,10,mul))
console.log(result(20,10,div))
console.log(result(20,0,div))
