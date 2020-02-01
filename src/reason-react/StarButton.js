import React from "react";

const StarButton = props => {
  return (
    <div className="star-button-container">
      <span>Hello {props.name} 👋</span>
    </div>
  );
};

export default StarButton;
