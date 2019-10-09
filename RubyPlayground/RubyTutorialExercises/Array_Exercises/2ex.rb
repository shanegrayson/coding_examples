#! /usr/bin/env ruby
#

puts "This returns a multipied matrix with just the first element missing"
arr = ["b", "a"]
arr = arr.product(Array(1..3))
arr.first.delete(arr.first.last)
puts arr

puts "This also returns b123, but will be missing the first 123"
arr = ["b", "a"]
puts arr = arr.product([Array(1..3)])
arr.first.delete(arr.first.last)
puts arr
