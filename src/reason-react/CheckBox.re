let make = (~label, ~handleCheckboxChange) => {
  let (isChecked, setIsChecked) = React.useState(() => false);

  let toggleCheckboxChange =
    React.useCallback(_ => {
      setIsChecked(prevState => !prevState);
      handleCheckboxChange(label);
    });

  <label>
    <input
      type_="checkbox"
      value=label
      checked=isChecked
      onChange=toggleCheckboxChange
    />
    <span className="checkmark"> {React.string(label)} </span>
  </label>;
};