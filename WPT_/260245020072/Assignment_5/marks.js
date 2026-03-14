let data = [];

function add() {
    let value = document.getElementById("num").value;
	
	{
        data.push(value);
		console.log(data);
        document.getElementById("num").value = "";
    }
}

function display() {
    document.getElementById("display").innerHTML = "";

    for (let j = 0; j < data.length; j++) {
        document.getElementById("display").innerHTML += `<li>${data[j]} </li>` + " ";
    }
}