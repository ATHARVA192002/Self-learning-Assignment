let a = 
{
	id : 100,
	name : "Pranav",
	email : "abc@gmail.com"
}

for ( const prop in a)
{
	if(Object.hasOwn(a,prop))
	{
	    const element = a[prop];
		console.log(JSON.stringify(a));
	}
}