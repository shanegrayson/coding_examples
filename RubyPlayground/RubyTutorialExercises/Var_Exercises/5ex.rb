#! /usr/bin/env ruby
#

puts 'The first loop will output 3'

x = 0
3.times do
  x += 1
end
puts x

puts 'This should through an error or earning, but doesn\'t'

y = 0
3.times do
  y += 1
  x = y
end
puts x
