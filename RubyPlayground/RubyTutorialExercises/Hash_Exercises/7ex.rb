#! /usr/bin/env ruby
#

x = "hi there"
my_hash = {x: "some value"}
my_hash2 = {x => "some value"}

puts "Uses the symbol x as the key"
puts "Uses the string symbol as the key"

p my_hash
p my_hash2
