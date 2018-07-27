type tree =
  | Empty
  | Node(int, tree, tree);

let myTree1 = Node(3, Node(2, Empty, Empty), Empty);

let rec ins = (v, t) =>
  switch (t) {
  | Empty => Node(v, Empty, Empty)
  | Node(x, _, _) when x === v => t
  | Node(x, l, r) when x > v => Node(x, ins(v, l), r)
  | Node(x, l, r) => Node(x, l, ins(v, r))
  };

let myTree =
  myTree1 |> ins(1) |> ins(4) |> ins(5) |> ins(5) |> ins(6) |> ins(0);