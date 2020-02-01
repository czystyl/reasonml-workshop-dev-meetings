module WorkShop = {
  let name = "ReasonML";
  let sign = 'R';

  let version = 4;
  let duration = 12.4;

  let add_ints = 23 + (-23);
  let add_floats = 12. +. (-12.0);

  let int_divisionAndMultiplication = 2 / 23 * 1;
  let float_divisionAndMultiplication = 2.5 /. 23. *. 1.9;

  let helloWorld = "Hello" ++ " " ++ "World";

  let isMore = 12 > 3;
  let isLess = 2. < float_of_int(3);
  let isMoreOrEqual = 33 >= 30;
  let isLessOrEqual = 22.9 <= 3.;

  let nagation = !true;
  let and_ = isMore && isMoreOrEqual;
  let or_ = isLess || isLessOrEqual;

  let isReference = and_ == and_; /* true */
  let isStructuralOrDeepEquality = and_ === or_; /* true */

  let previousVersions = [0, 1, 2, 3];

  let participants = [|
    "Rachel",
    "Monica",
    "Phoebe",
    "Joey",
    "Chandler",
    "Ross",
  |];

  /* TODO: Add more attributes to the person type */

  type person = {
    name: string,
    age: int,
    weight: float,
    friends: array(string),
  };

  let joey = {
    name: "Joey Tribbiani",
    age: 30,
    weight: 80.,
    friends: participants,
  };
};