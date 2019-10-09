#! /usr/bin/env ruby
#

x = [1, 2, 3, 4, 5]

puts "this each loop should return 2, 3, 4, 5, 6"
x.each do |num|
	puts num + 1
end
