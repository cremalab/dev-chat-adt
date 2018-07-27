/*
   Redux actions are a perfect fit for sum types
 */

type action =
  | Increment
  | Decrement
  | ResetTo(int);
/*   ^---type     ^------------^-constructors */

/*
   self descriptive
   don't have to contian payloads
 */

let state = 0;

let reducer = (s: int, a: action) =>
  switch (a) {
  | Increment => s + 1
  | Decrement => s - 1
  | ResetTo(v) => v
  };

/*
   Adding a new constructors will cause the compiler to warn – ResetTo(int)
   constructors can have parameters
 */

/*
   To actually use sum types you use the constructor
 */
let result = ResetTo(10) |> reducer(state) |> string_of_int;