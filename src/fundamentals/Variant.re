type answer =
  | Yes
  | No
  | IDoNotKnow;

let questionOne = Yes;
let questionTwo = IDoNotKnow;

type response =
  | Response(int)
  | Error(string)
  | Loading;

let statusCode200 = Ok(200);
let errorMessage = Error("not_found");
let loading = Loading;

/*
  Reason don't have null or undefined
  but we have Variants!
 */
type option('a) =
  | None
  | Some('a);

let empty = None;
let filled = Some(statusCode200);