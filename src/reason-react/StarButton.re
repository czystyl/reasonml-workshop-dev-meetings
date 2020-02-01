[@react.component]
let make = (~name) => {
  <div className="star-button-container">
    <span> {React.string("Hello" ++ name ++ "👋 ")} </span>
  </div>;
};