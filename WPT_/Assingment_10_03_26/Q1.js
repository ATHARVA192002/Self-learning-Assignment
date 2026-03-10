let a1 = [6,1,9,2,8,4,5,7,3]
console.log(a1);

let evenArr = a1.filter((num) => num % 2 == 0);
console.log(evenArr);

let oddArr = a1.filter((num) => num%2 != 0);
console.log(oddArr);

let sArr = a1.sort((n1,n2) => n1-n2);
console.log(sArr);