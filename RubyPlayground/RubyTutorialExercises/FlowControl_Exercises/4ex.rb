#! /usr/bin/env ruby
#

puts "1. this will return FALSE"
'4' == 4 ? puts("TRUE") : puts("FALSE")

puts "2. this will return 'Did you get it right?'"
x = 2
   if ((x * 3) / 2) == (4 + 4 - x - 3)
     puts "Did you get it right?"
   else
     puts "Did you?"
   end

puts "3. this will return 'Alright now!'"
y = 9
   x = 10
   if (x + 1) <= (y)
     puts "Alright."
   elsif (x + 1) >= (y)
     puts "Alright now!"
   elsif (y + 1) == x
     puts "ALRIGHT NOW!"
   else
     puts "Alrighty!"
   end

