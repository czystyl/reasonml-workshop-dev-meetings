// Generated by BUCKLESCRIPT, PLEASE EDIT WITH CARE


function checkFirstArgOnly(a, b) {
  if (a) {
    return "First lost";
  } else {
    return "First won";
  }
}

function checkIfBothWon(a, b) {
  if (a || b) {
    return "Both didn't win";
  } else {
    return "First and second won";
  }
}

var versions = /* :: */[
  1,
  /* :: */[
    2,
    /* :: */[
      3,
      /* [] */0
    ]
  ]
];

function getSum(_list, _acc) {
  while(true) {
    var acc = _acc;
    var list = _list;
    if (list) {
      _acc = list[0] + acc | 0;
      _list = list[1];
      continue ;
    } else {
      return acc;
    }
  };
}

var sum = getSum(versions, 0);

export {
  checkFirstArgOnly ,
  checkIfBothWon ,
  versions ,
  getSum ,
  sum ,
  
}
/* sum Not a pure module */
