#! /usr/bin/env ruby
#

def multiply(a, b)
	return a * b
end

puts "First number to multiply"
x = gets.to_i
xS = x.to_s

puts "Second number to multiply"
y = gets.to_i
yS = y.to_s

product = multiply(x, y)
productS = product.to_s

puts xS + " * " + yS + " = " + productS
