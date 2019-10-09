#! /usr/bin/env ruby
#

arr = [1, 3, 5, 7, 9, 11]
number = 3

arr.select { |arrNum|
	if (arrNum == number)
		puts "#{number} is in the array"
	end
	}
