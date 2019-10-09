#! /usr/bin/env ruby
#

person = {name: 'Bob', occupation: 'web developer', hobbies: 'painting'}

p person.has_key?('name')
p person.has_value?('Bob')
