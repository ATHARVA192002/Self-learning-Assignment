let Book = {
	
	BookId : 2 ,
	BookName : "CPP",
	BookPrice : 500
}

var obj = Book

var json = (JSON.stringify(obj))
console.log("Converted to JSON From Object :"+json)

var rev = (JSON.parse(json))
console.log("Converted to Object From JSON :")
console.log(rev)
