/*
   Handling the absence of data a.k.a null
 */

/*          v- type param ----v */
type maybe('a) =
  | None
  | Some('a);

type user = {
  name: string,
  email: maybe(string),
  age: maybe(int),
};

/*
   to get data out of an sum type you have to use a switch (pattern matching)
 */
let getEmail = (u: user) =>
  switch (u.email) {
  | None => "not defined"
  | Some(e) => e
  };

let blake = {name: "Blake", email: None, age: Some(12)};
let rob = {name: "Rob", email: Some("rob@crema.us"), age: Some(33)};

let result = "My email is " ++ getEmail(blake);