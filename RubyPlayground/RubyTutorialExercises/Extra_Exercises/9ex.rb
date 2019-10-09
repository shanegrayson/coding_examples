#! /usr/bin/ruby
#

h1 = { a: 1, b: 2, c: 3, d: 4 }

p h1

p h1[:b]

h1[:e] = 5

p h1

h1.delete_if { |k, v| v < 3.5 }

p h1
