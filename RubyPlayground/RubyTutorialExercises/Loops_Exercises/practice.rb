#! /usr/bin/env ruby
#

i = 0
loop do
	i += 1
	if (i == 3) || (i == 5)
		next
	end
	puts i
	if i == 11
		break
	end
end

x = gets.chomp.to_i
while x >= 0
	puts x
	x = x - 1
end

loop do
	puts "Again!?"
	answer = gets.chomp
	if (answer != 'y') && (answer != 'Y')
		break
	end
end

x = [1, 2, 3, 4, 5, 6] 
for i in x do
	puts i
end

x.each do |num|
	if num == 4
		puts "num is 4"
	end
end

names = ['Bob', 'Joe', 'Steve', 'Janice', 'Susan', 'Helen']
y = 1

names.each do |name|
	puts "#{y}: #{name}"
	y += 1
end


