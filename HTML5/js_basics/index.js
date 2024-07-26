console.log("Hello dear");
let name="Ajinkya";
console.log(name);

let person = {
    name2:"Aji",
    age: 30
}
console.log(person);
person.name2='Krishna';
person['age']= 17;
console.log(person);

function greet(name){
    console.log('Hello ' + name);
}

greet('Mike');

function sqr(num){
    return num*num;
}
console.log(sqr(7));