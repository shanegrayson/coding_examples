#! /usr/bin/ruby
#

# Modeling real world objects
# This Class generates a weapon object to be calculated
#
class CreateWeapon
	attr_accessor :n, :weapon_damage, :main_stat, 
		:crit_base, :det_base, :sks_base,
		:mat1, :mat2
	attr_reader :crit_max, :det_max, :sks_max

	def initialize(id, n, wd, ms, 
		       crit_base, crit_max,
		       det_base, det_max,
		       sks_base, sks_max,
		       mat1, mat2)
		puts "---New Weapon Created---"
		@id = id
		@name = n
		@weapon_damage = wd
		@main_stat = ms
		@crit_base = crit_base
		@det_base = det_base
		@sks_base = sks_base
		@crit_max = crit_max
		@det_max = det_max
		@sks_max = sks_max
		@mat1 = mat1
		@mat2 = mat2
	end

	# mat_add and mat_remove will add or remove stats based on 
	# the materia placed in the items
	#
	def mat_add(mat1, mat2)
		case mat1
		when 'CRIT60'
			@crit_base += 60
		when 'DET60'
			@det_base += 60
		when 'SKS60'
			@sks_base += 60
		else
			puts "Wrong format. Try CRIT60, DET60, or SS60"
		end

		case mat2
		when 'CRIT60'
			@crit_base += 60
		when 'DET60'
			@det_base += 60
		when 'SKS60'
			@sks_base += 60
		else
			puts "Wrong format. Try CRIT60, DET60, or SS60"
		end
	end

	def mat_remove(mat1, mat2)
		case mat1
		when 'CRIT60'
			@crit_base -= 60
		when 'DET60'
			@det_base -= 60
		when 'SKS60'
			@sks_base -= 60
		else
			puts "Wrong format. Try CRIT60, DET60, or SS60"
		end

		case mat2
		when 'CRIT60'
			@crit_base -= 60
		when 'DET60'
			@det_base -= 60
		when 'SKS60'
			@sks_base -= 60
		else
			puts "Wrong format. Try CRIT60, DET60, or SS60"
		end
	end


	# Attributes are usually refered to as instance vars
	#
	def to_s
		puts "Item ID:		#{@id}"
		puts "Weapon Name:	#{@name}"
		puts "Weapon Damage:	#{@weapon_damage}"
		puts "Main Stat:	#{@main_stat}"
		puts "Crit_B:		#{@crit_base}"
		puts "Det_B:		#{@det_base}"
		puts "Sks_B:		#{@sks_base}"
		puts "Crit_M:		#{@crit_max}"
		puts "Det_M:		#{@det_max}"
		puts "Sks_M:		#{@sks_max}"
		puts "Mat1:		#{@mat1}"
		puts "Mat2:		#{@mat2}"
	end
end

