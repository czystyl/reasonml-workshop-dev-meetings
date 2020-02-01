let welcomeMessage = "Hello DevMeetings!";
let startHour = 10;
let fullTime = 8 + startHour;

let showWelcomeMessage = startHour == 10;

if (showWelcomeMessage) {
  let message = "How are you so far?";
  print_endline(message);
};

let name = "Luke";
print_endline(name); /* Prints "Luke" */

let name = "Matt";
print_endline(name); /* Prints "Matt" */

let trick = {
  let hello = "hello";
  let world = "world";
  hello ++ " " ++ world; /* NO more return */
};