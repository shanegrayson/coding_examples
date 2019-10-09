#! /usr/bin/ruby
#

arr = []
i = 0

while i < 12 do
	arr.push(i)
	i += 1
end

p arr

arr.pop

p arr

arr.push(3)

p arr
