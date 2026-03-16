function add(a,b){
	return "addition: " + (a+b)
}

function sub(a,b){
	return "subtraction: " + (a-b)
}

function mul(a,b){
		if(b==0){
			console.log("error")
		}else{
			var m = a*b
			return "multiplication: " + (m)
		}
}

function div(a,b){
		if(b==0){
			console.log("error")
		}else{
			var d = a/b
			return "division: " + (d)
		}
}

function result(a,b,callback){
	return callback(a,b)
}
  
console.log(result(20,10,add))
console.log(result(20,10,sub))
console.log(result(20,10,mul))
console.log(result(20,10,div))
console.log(result(20,0,div))
