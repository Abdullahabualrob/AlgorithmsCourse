function factorialIterative(n) {
    let result = 1;
    for (let i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
function factorialRecursive(n) {
    if (n === 0 || n === 1) return 1;
    return n * factorialRecursive(n - 1);
}


const testtime=[ 1,5,10,20,32,100,400,1000,3455,7899,15627,200000, 123456  ] ;
for( test of testtime){
    let starttime=performance.now();
    factorialRecursive(test);
    let endtime=performance.now();
    let time=endtime-starttime;
    console.log(` Recursive - n=${test} , Execution time ${ time} ms  `); 
starttime=performance.now();
    factorialIterative(test);
   endtime=performance.now();
    let timeloop=endtime-starttime;
    console.log( `Iterative  - n=${test} , Execution time ${ timeloop }`) ;
    }