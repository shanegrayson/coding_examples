#! /usr/bin/env ruby
#

h1 = { a: 100, b: 200 }
h2 = { b: 300, c: 400 }
p h1.merge(h2)
p h1
p h2

p h1.merge!(h2)
p h1
p h2

p "the h1 with the '!' bang is mutated"

