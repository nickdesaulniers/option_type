use core::rand;

fn may_return_none () -> Option<@int> {
  if rand::Rng().next() % 2 == 1 { Some(@666) } else { None }
}

fn main () {
  let x: Option<@int> = may_return_none();
  
  io::println(match x {
    Some(y) if *y == 777 => "Lucky Sevens",
    Some(y) if *y == 666 => "Number of the Beast",
    Some(y) if *y == 42 => "Meaning of Life",
    Some(_) => "Nothing special",
    None => "No value"
  });
  
  match x {
    Some(y) if *y == 666 => {
      io::println("Did I mention that Iron Maiden is my favorite Band?")
    },
    _ => {}
  };
}
