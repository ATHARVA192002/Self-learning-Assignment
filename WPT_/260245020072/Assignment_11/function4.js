function checkNum(num){
    if(num%2==0){
        console.log("even")
    }else{
        console.log("odd")
    }
};

checkNum(3);

setTimeout(function(){
    console.log("data after 3 sec");
}, 3000);

console.log("Console.log()")

let promise = new Promise((resolve,reject)=>{
    let num = 4;
    if(num%2==0){
        resolve("even")
    }else{
        reject("odd")
    }
});

promise.then(msg=> console.log(msg)).catch(error=>console.log(error));





