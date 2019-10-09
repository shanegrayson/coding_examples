#! /usr/bin/ruby
#

print "Yes, hash values can be arrays\n"
h1 = { a1: [1, 2, 3], a2: [4, 5, 6] }
p h1

print "Yes, you can have an array of hasehs\n"
a3 = [ { h2: 1, h2: 2 }, { h3: 3, h4: 4 } ]
p a3
