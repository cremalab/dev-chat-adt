/*
   ADT - algebraic data type
   - defining an "alegbra" of valid operations
   - every type has a certain number of possibile states
   - two types are "product" and "sum"
   - product types usually have nearly infinite states (all the possible ints times all the possible strings)
   - sum types can also be inifine but you can reduce the number of possibilites
 */

/*
   other names: sum types, variant types, disjoint unions
 */

/*
   Product type - things you know
   - shape
   - type of fields (in a typed language)
 */

/* we can do this in js – its just an object */
type product = {
  this: int,
  that: string,
};

/*
   Sum type - things you know
   - finite set of options
   - you have _one_ of the options at a time
   - compiler knows if you account for all options
 */

/* we can't do this (easily) in js */
type bool =
  | This
  | That;

/* note: this is different than a union type in flow or typescript */

let result = "Hello ADTs!";