#! /usr/bin/ruby
#

arr = []
i = 0

while i < 11 do
	arr.push(i)
	i += 1
end

p arr

arr.push(11)

p arr

arr.unshift(-1)

p arr
