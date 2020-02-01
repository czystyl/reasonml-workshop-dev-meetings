type choose =
  | Win
  | Lose;

let checkFirstArgOnly = (a, b) => {
  switch (a, b) {
  | (Win, _) => "First won"
  | (Lose, _) => "First lost"
  };
};

let checkIfBothWon = (a, b) => {
  switch (a, b) {
  | (Win, Win) => "First and second won"
  | (_, _) => "Both didn't win"
  };
};

let versions = [1, 2, 3];

let rec getSum = (list, acc) =>
  switch (list) {
  | [] => acc
  | [first, ...tail] => getSum(tail, first + acc)
  };

let sum = getSum(versions, 0);