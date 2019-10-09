#! /usr/bin/ruby
#

class SuperTracker
	@@number_insts = 0

	def self.number_insts
		puts "num of #{@@number_insts}"
	end

	def initialize
		@@number_insts += 1
	end
end

class SubTracker < SuperTracker
	def initialize
		super
	end
end

test1 = SubTracker.new
p test1

test2 = SubTracker.new
p test2

test3 = SubTracker.new
p test3
