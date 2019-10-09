#! /usr/bin/env ruby
#

def has_lab(string)
	if string =~ /lab/
		puts "The string " + string + " has a match"
	elsif string =~ /Lab/
		puts "The string " + string + " has a match"
	else
		puts "The string " + string + " has no match"
	end
end

has_lab("labratory")
has_lab("experiment")
has_lab("Pans Labyrinth")
has_lab("elaborate")
has_lab("labratory")
has_lab("polar bear")

def execute(&block)
  block
end

puts "Nothing happens. Add a block.call, anyways just got an error"
execute { puts "Hello from inside the execute method!" }

puts "Exception handling is a way to catch errors before they happen"
puts "And it allows the full execution of the program if these errors occur"

def execute(&block)
	block.call
end

execute { puts "Hello from inside the execute method!" }

puts "The problem is no '&' in the parameter listing"
