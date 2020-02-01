type answer =
  | Yes
  | No;

type optionAnswer = option(answer);

let notAnswered: optionAnswer = None;
let answeredWithYes = Some(Yes);
let answeredWithNo = Some(No);

let checkAnswer = (arg: optionAnswer) => {
  switch (arg) {
  | None => "Player does not answer"
  | Some(answer) =>
    switch (answer) {
    | Yes => "Player answers YES"
    | No => "Player answers NO"
    }
  };
};