let welcomeMessage = name => "Hello" ++ " " ++ name;

let longFunction = name => {
  let prefix = "Hello";
  let suffix = "!";

  prefix ++ " " ++ name ++ " " ++ suffix;
};

let message = welcomeMessage("Dev Meeting");

let add = (x, y) => x + y;
let add5to6 = add(5, 6);

let add5 = add(5);
let result_15 = add5(10);

[%raw
  {|
  function findCoordinates(latitude, longitude) {
      return;
  }

  findCoordinates(51.1079, 17.0385);
|}
];

[%raw
  {|
  function betterFindCoordinates({ latitude, longitude }) {
      return;
  }

  betterFindCoordinates({
      latitude: 51.1079,
      longitude: 17.0385,
  });
|}
];

let findCoords = (~latitude, ~longitude) => {
  let _notUser = latitude +. longitude;

  "You are in Wroclaw";
};

let youAre = findCoords(~latitude=51.1079, ~longitude=17.0385);

let rec neverTerminate = () => neverTerminate();