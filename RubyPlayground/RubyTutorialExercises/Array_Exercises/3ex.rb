#! /usr/bin/env ruby
#

arr = [["test", "hello", "world"],["example", "mem"]]

if arr[1].include?("example")
	puts "example"
end

arr[1].select { |word|
	if word == "example"
		puts "example"
	end
}
	
puts arr.last.first
