#! /usr/bin/env ruby
#

def contains_b(string)
	if string =~ /b/
		puts "We have a match"
	else
		puts "No match"
	end
end

contains_b("Fake feelings")
contains_b("football")

a = "this is a first pointer"
b = a
a = "this is a second pointer"

c = "hi there"
d = c
c << " shane"

a = [1, 2, 3, 4]
b = a
c = a.uniq!

def test(b)
	b.map! {|letter| "I like the letter: #{letter}"}
end

a = ['a', 'b', 'c']

def take_block(&block)
	block.call
end

take_block do
	puts "Block being called in meth"
end

names = ['bob', 'joe', 'steve', nil, 'frank']

names.each do |name|
  begin
    puts "#{name}'s name has #{name.length} letters in it."
  rescue
    puts "Something went wrong!"
  end
end

def divide(number, divisor)
  begin
    answer = number / divisor
  rescue ZeroDivisionError => e
    puts e.message
  end
end

puts divide(16, 4)
puts divide(4, 0)
puts divide(14, 7)
