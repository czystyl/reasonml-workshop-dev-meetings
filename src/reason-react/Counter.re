type action =
  | Increment
  | Decrement
  | Reset
  | SetCount(int);

type state = {count: int};

let initialState = {count: 0};

let reducer = (state, action) =>
  switch (action) {
  | Increment => {count: state.count + 1}
  | Decrement => {count: state.count - 1}
  | SetCount(value) => {count: value}
  | Reset => initialState
  };

[@react.component]
let make = () => {
  let (state, dispatch) = React.useReducer(reducer, initialState);

  <div className="sort">
    <span>
      {React.string("Current state: " ++ string_of_int(state.count))}
    </span>
    <button onClick={_ => dispatch(Increment)}> {React.string("+")} </button>
    <button onClick={_ => dispatch(Decrement)}> {React.string("-")} </button>
    <button onClick={_ => dispatch(Reset)}> {React.string("Reset")} </button>
    <button
      onClick={_ => {
        Random.self_init();
        dispatch(SetCount(Random.int(100)));
      }}>
      {React.string("Set magic number")}
    </button>
  </div>;
};