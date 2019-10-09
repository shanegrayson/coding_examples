#! /usr/bin/env ruby
#

name_hash = { name1: 'Shane', name2: 'Grayson', name3: 'Rob', name4: 'Andrew' }

name_hash.each do |key, value|
	puts "The key '#{key}' is hashed to the name '#{value}'"
end
