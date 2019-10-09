#! /usr/bin/env ruby
#

names = ['bob', 'joe', 'susan', 'margaret']
names.pop
names.push("jodie")
puts names

names.pop
names << "another jodie"
puts names

names[3] = 'jody'
puts names
