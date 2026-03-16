function add(a,b){
	return "addition: " + (a+b)
}

function sub(a,b){
	return "subtraction: " + (a-b)
}


function mul(a,b){
    
    return new Promise(function(resolve,reject){
        if(b==0){
			reject("error")
		}else{
			var m = a*b
			resolve( "multiplication: " + m)
		}
        
    });
}

function div(a,b){
    
	return new Promise(function(resolve,reject){
		if(b==0){
			reject("error2")
		}else{
			var d = a/b
			resolve("division: "+d)
		}
	});
}

function result(a,b,callback){
	return callback(a,b)
}
  
console.log(result(20,10,add))
console.log(result(20,10,sub))
mul(20,0).then(function(res){
    console.log(res)
}).catch(function(err){
    console.log(err)
})
div(20,0).then(function(res){
    console.log(res)
}).catch(function(error){
    console.log(error)
})

