let fizzbuzz n = 
  match n with
  | n when n mod 3 = 0 && n mod 5 = 0 -> "fizzbuzz"
  | n when n mod 3 = 0 -> "fizz"
  | n when n mod 5 = 0 -> "buzz"
  | _ -> string_of_int n 
;;