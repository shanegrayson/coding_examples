#! /usr/bin/env ruby
#

def upper(a) 
	if (a.length > 0) && (a.length < 11)
		return puts a.upcase
	else
		return puts "The string is not the correct length 0-10."
	end
end

upper("hello")
upper("hellohellohello")
