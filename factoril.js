console.log("This will give output as a factorial of non-negative integer");

function fact(n) {
    if (n == 0 || n == 1) return 1;
    else return n * fact(n - 1);
}

let n = 170;
let f = 1;
for (let index = n; index >= 1; index--) {
    f *= index;
}
console.log(f);


console.log(fact(n));

