function lib(length)
{
	let password1 = ""
	let passwordData = "abcdefghijklmnopqrstuvwxyz0123456789@_"
	
	for(let i=1; i<=length; i++){
		
		let pos = Math.floor(Math.random()*passwordData.length)
		
		password1 += passwordData[pos]
		
		
	}
	
	console.log(password1)
}
	lib(6)
	