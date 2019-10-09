#! /usr/bin/ruby
#


#
#-----Modules
#
module Swimable
	def swim
		"I can swim"
	end
end

module Walkable
	def walk
		"I can walk"
	end
end

module Climbable
	def climb
		"I can climb"
	end
end


#
#-----Level 1 Classes
#
class Animal
	attr_accessor :name

	def initialize(name)
		@name = name
	end
end


#
#-----Level 2 Classes
#
class Mammal < Animal
	include Walkable
	include Climbable
end

class Aquatic < Animal
	include Swimable
end


#
#----Level 3 Classes
#
class Dog < Mammal
	include Swimable
	def initialize(name, color)
		super(name)
		@color = color
	end
end

class Fish < Aquatic
	def initialize(name)
		super(name)
	end
end

class Cat < Mammal
	def initialize(name)
		super(name)
	end
end


#
#-----Main
#
sparky = Dog.new("Sparku", "Brown")
neemo = Fish.new("Neemoi")
paws = Cat.new("Paws")

puts
p sparky

puts
p sparky.swim
p neemo.swim

puts
p sparky.walk

puts
puts "-----Animal Method Lookup-----"
puts Animal.ancestors

puts ""
puts "You can only subclass from one class. But you can mix in as many modules as you'd like."
puts "If it's an 'is-a' relationship, choose class inheritance. If it's a 'has-a' relationship, choose modules. Example: a dog 'is an' animal; a dog 'has an' ability to swim."
puts "You cannot instantiate modules (i.e., no object can be created from a module). Modules are used only for namespacing and grouping common methods together."
