type person = {
  name: string,
  age: int,
};

let joey = {name: "Joey Tribbiani", age: 30};

let name = joey.name;
let age = joey.age;

let luke: person = {name: "Luke Skywalker", age: 53};
let lukeWithJoeyAge = {...luke, age: joey.age};

type mutablePerson = {
  name: string,
  mutable age: int,
};

let pat = {name: "Pat", age: 17};
pat.age = pat.age + 1; /* Now Pat has 18 years */