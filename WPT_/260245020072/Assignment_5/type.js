

function upper() {
	 let data = document.getElementById("name").value; 
	 
	 let value = data.toUpperCase();
	 console.log(value);
	 
	 document.getElementById("display").innerHTML = value;
}

function lower() {
	let data = document.getElementById("name").value; 
	let value2 = data.toLowerCase();
	console.log(value2);
	
	document.getElementById("display").innerHTML = value2;
}

function same()
{
	let data = document.getElementById("name").value; 
	let def = data;
	console.log(def);
	
	document.getElementById("display").innerHTML = def;
}