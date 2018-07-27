/*
   request state
 */

type request =
  | NotRequested
  | Loading
  | Error(int)
  | Success(string)
  | Timedout;

let handleRequest = (r: request) : string =>
  switch (r) {
  | NotRequested => "Click to request"
  | Loading => "Loading..."
  | Error(n) => "Error number: " ++ string_of_int(n)
  | Success(d) => d
  | Timedout => "The server stopped responding"
  };

let result = handleRequest(Timedout);