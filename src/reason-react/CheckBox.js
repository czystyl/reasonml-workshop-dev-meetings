import React from "react";

const Checkbox = ({ label, handleCheckboxChange }) => {
  const [isChecked, setIsChecked] = React.useState(false);

  const toggleCheckboxChange = React.useCallback(() => {
    setIsChecked(prevState => !prevState);
    handleCheckboxChange(label);
  });

  return (
    <label>
      <input
        type="checkbox"
        value={label}
        checked={isChecked}
        onChange={toggleCheckboxChange}
      />

      <span className="checkmark">{label}</span>
    </label>
  );
};

export default Checkbox;
