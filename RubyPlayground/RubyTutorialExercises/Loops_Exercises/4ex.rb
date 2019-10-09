#! /usr/bin/env ruby
#

def toZero(num)
	puts num
	if num > 0
		toZero(num - 1)
	end
end

toZero(7)
