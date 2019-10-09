#! /usr/bin/env ruby
#

arr = []
i = 0

while i < 11 do
	arr = arr.push(i)
	i += 1
end

arr.select { |num| 
	if num.odd?
		print num, " "
	end
}
print "\n"

arr.select { |num|
	if num % 2 != 0
		print num, " "
	end
}
print "\n"
