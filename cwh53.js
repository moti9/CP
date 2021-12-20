console.log("This is javaScript learning journey");

function greet(name="MMV4EVR") {
    console.log(name + " is a good boy");
}

function sumNum(a,b,c)
{
    return (a+b+c);
}

// let name ="Motiv";
// let name2 = "Rocky";
// let name3 = "Ankit";
// let name4 = "Vishal";
// let name5 = "Pranjal";

// console.log(name + " is a good boy.\n");
// console.log(name2 + " is a good boy.\n");
// console.log(name3 + " is a good boy.\n");
// console.log(name4 + " is a good boy.\n");
// console.log(name5 + " is a good boy.\n");

// greet(name);
// greet(name2);
// greet(name3);
// greet(name4);
// greet(name5);

// let name =[ "Motiv","Rocky","Ankit","Pranjal","Vishal"];
// for (let index = 0; index < name.length; index++) {
//     const element = name[index];
//     console.log(element+" is a good boy");
// }

let nArr =["Motiv","Rocky","Ankit","Pranjal","Vishal"];
for (let index = 0; index < nArr.length; index++) {
    // console.log(greet(nArr[index]));
    greet(nArr[index]);
    // greet();
}
// console.log(nArr[4]);

console.log(sumNum(63,85,96));

