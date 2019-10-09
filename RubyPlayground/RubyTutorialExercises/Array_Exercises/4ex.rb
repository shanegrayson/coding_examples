#! /usr/bin/env ruby
#

arr = [15, 7, 18, 12, 8, 5, 1]

puts "This will print index 6 element 5"
puts arr.index(5)

puts "This will print error or nil since it is looking for the 6th nested array"
puts arr.index[5]

puts "This will print nothing. Looks like it should print the 5th index"
puts arr[5]
