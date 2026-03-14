let Book = {
	
	BookId : 2 ,
	BookName : "CPP",
	BookPrice : 500
}

let { BookId,BookName,BookPrice} = Book;

let a = Book.BookId();
console.log(a)

console.log(BookId+" "+BookName+" "+BookPrice)	