/*
  request state
*/

type request = NotRequested | Loading | Error(int) | Success(string);

let handleRequest = (r: request): string => {
  switch (r) {
  | NotRequested => "Click to request"
  | Loading => "Loading..."
  | Error(n) => "Error number: " ++ string_of_int(n)
  | Success(d) => d
  }
};

let result = handleRequest(NotRequested);