#! /usr/bin/ruby
#


module Mammal
	class Dog
		DOG_YEARS = 7

		attr_accessor :name, :age

		def initialize(n, a)
			self.name = n
			self.age = a
		end

		def speak(sound)
			p "#{sound}"
		end

		def public_disclosure
			"#{self.name} in human years is #{human_years}"
		end

		def a_public_meth
			"will this work? " + self.a_protected_meth
		end

		protected

		def a_protected_meth
			"Yes, I'm prot"
		end

		private

		def human_years
			age * DOG_YEARS
		end
	end

	class Cat
		def say_name(name)
			p "#{name}"
		end
	end

	def self.some_out_of_place_meth(num)
		num ** 2
	end
end

buddy = Mammal::Dog.new("Buddy", 7)
kitty = Mammal::Cat.new

puts buddy.public_disclosure
buddy.speak("Arf!")
kitty.say_name("Kitty")

value = Mammal::some_out_of_place_meth(4)
p value

p buddy::a_public_meth
#p buddy::a_protected_meth

puts
puts "from outside the class, protected methods act just like private methods."
puts "from inside the class, protected methods are accessible just like public methods."
