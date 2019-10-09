#! /usr/bin/ruby
#

module Towable
	def can_tow?(pounds)
		pounds < 2000 ? true : false
	end
end

class Vehicle
	@@num_v = 1

	def num_v
		puts "This has #{@@num_v} vehicals."
	end

	def initialize
		@@num_v += 1
	end

	def vehical_info
		puts "Make:\t#{self.make}\nModel:\t#{self.model}\nYear:\t#{self.year}\nColor:\t#{self.color}\n"
	end

	def self.gas_mileage(g, m)
		puts "#{ m / g } miles per hour"
	end
end

class MyCar < Vehicle
	attr_accessor :year, :make, :model, :color, :currentSpeed

	NUM_DOORS = 4

	def initialize(y, ma, mo, c)
		@year = y
		@make = ma
		@model = mo
		@color = c
		@current_speed = 0
	end

	def speed_up
		@current_speed += 10
	end

	def speed_down
		@current_speed -= 10
	end

	def shut_down
		@current_speed = 0
	end

	def spray_paint(color)
		self.color = color
		print "The color of the car is now " + color.to_s + "\n"
	end

	def current_speed
		puts "You are now going #{@current_speed} mph."
	end

	def num_doors
		puts "Car has " + NUM_DOORS.to_s + " number of doors."
	end

end

class MyTruck < Vehicle
	include Towable
	NUM_DOORS = 2
end

myCar = MyCar.new(2019, 'Ford', 'Ranger', 'White')
myCar.vehical_info
myCar.num_v

myTruck = MyTruck.new
myTruck.num_v

userAnswer = 'Y'
puts "Enter 'N' to exit the program, 'U' to speed up, or 'D' to speed down."
while userAnswer != 'N' && userAnswer != 'n'
	userAnswer = gets.chomp
	if userAnswer == 'U'
		myCar.speed_up
		myCar.current_speed
	end

	if userAnswer == 'D'
		myCar.speed_down
		myCar.current_speed
	end
end       

myCar.shut_down
myCar.current_speed

myCar.color = "Black"
puts myCar.color

myCar.spray_paint("Green")
puts myCar.color

puts "---Method Lookup---"
puts MyTruck.ancestors
puts MyCar.ancestors
