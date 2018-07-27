/*
  Handling the absence of data a.k.a null
*/

/*          v- type param ----v */
type maybe('a) = None | Some('a);

type user = {
  name: string,
  email: maybe(string),
};


/*
  to get data out of an sum type you have to use a switch (pattern matching)
*/
let getEmail = (u: user) => {
  u.email
};

let blake = {
  name: "Blake",
  email: None,
};

/* let result = "My email is " ++ getEmail(blake); */
