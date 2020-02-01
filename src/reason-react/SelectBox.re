type sortItem = {
  value: string,
  label: string,
};

[@bs.module "./Selectbox.js"] [@react.component]
external make:
  (
    ~classes: string=?,
    ~handleOnChange: string => unit,
    ~options: array(sortItem)
  ) =>
  React.element =
  "default";