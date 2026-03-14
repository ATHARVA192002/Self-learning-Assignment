let arr = [1,200,30,47,55,6,8,99,10]
console.log(arr);

let even = arr.filter((num) => num % 2 == 0);
console.log("Array of Even:")
console.log(even);

let odd = arr.filter((num) => num%2 != 0);
console.log("Array of Odd:")
console.log(odd);

let sort = arr.sort((n1,n2) => n1-n2);
console.log("Array of Sort:")
console.log(sort);