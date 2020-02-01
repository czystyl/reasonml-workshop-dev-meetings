let d3coordinates = (51.1079, 17.0385, 1);

let book = ("Title", 1990, ["author", "sub author"]);

let (x, y, z) = d3coordinates;

let getTitleWithWritters = bookTuple => {
  let (title, _, writers) = bookTuple;

  (title, writers);
};