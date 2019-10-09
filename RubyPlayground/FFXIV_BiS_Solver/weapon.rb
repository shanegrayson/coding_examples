#! /usr/bin/ruby
#

# Modeling real world objects
# This Class generates a weapon object to be calculated
#
class CreateWeapon
	attr_accessor :n, :weapon_damage, :main_stat, :crit, :det, :sks

	def initialize(id, n, wd, ms, crit, det, sks)
		puts "---New Weapon Created---"
		@id = id
		@name = n
		@weapon_damage = wd
		@main_stat = ms
		@crit = crit
		@det = det
		@sks = sks

	end

	# Attributes are usually refered to as instance vars
	#
		
	def to_s
		puts "Item ID:		#{@id}"
		puts "Weapon Name:	#{@name}"
		puts "Weapon Damage:	#{@weapon_damage}"
		puts "Main Stat:	#{@main_stat}"
		puts "Crit:		#{@crit}"
		puts "Det:		#{@det}"
		puts "Sks:		#{@sks}"
	end
end

