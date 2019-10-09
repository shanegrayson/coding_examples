#! /usr/bin/env ruby
#

def numReporter(num)
	a = num
	puts "The number is: " + a.to_s
	answer = case
		 when (a >= 0) && (a <= 50)
			puts "Number is between 0 and 50"
		 when (a < 0)
			 puts "Number is less than 0"
		 else
		 	puts "Number is not between 0 and 50"
		 end
end

numReporter(15)
numReporter(-11)
numReporter(0)
numReporter(50)
numReporter(100)
