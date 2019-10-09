#! /usr/bin/ruby
#

class GoodDog
	@@num_dogs = 0
	DOG_YEARS = 7
	
	attr_accessor :name, :breed, :age

	def initialize(n, b, a)
		self.name = n
		self.breed = b
		self.age = 7 * DOG_YEARS
		@@num_dogs += 1
	end

	def to_s
		puts "Dogs Name: " + self.name.to_s
		puts "Dogs Breed: " + self.breed.to_s
		puts "Dogs Age: " + self.age.to_s
	end

	def self.what_am_i
		"I am a GoodDog class!"
	end

	def self.tot_num_dogs
		@@num_dogs
	end	
end

class AlsoGoodDog
	attr_accessor :name, :height, :weight

	def initialize(n, h, w)
		self.name = n
		self.height = h
		self.weight = w
	end

	def change_inf(n, h, w)
		self.name = n
		self.height = h
		self.weight = w
	end

	def info
		"#{self.name} weighs #{self.weight} and is #{self.height} tall."
	end

	def what_is_self
		self
	end
end


puts GoodDog.what_am_i

bengi = GoodDog.new("bengi", "pit bull", 3)

puts GoodDog.tot_num_dogs

ariel = GoodDog.new("areil", "pit bull", 8)

puts GoodDog.tot_num_dogs

ariel.to_s

yoggi = AlsoGoodDog.new("Yoggi", 3, 56)

p yoggi.what_is_self
