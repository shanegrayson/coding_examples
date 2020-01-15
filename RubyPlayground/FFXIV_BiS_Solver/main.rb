#! /usr/bin/ruby
#

require_relative 'weapon'

# I am thinking this would be a constant since we would not want
# to change the users desire to have 300 or more Skill Speed
#
SKS_NEEDED = 300

# egSword = CreateWeapon.new("Weapon Name")
# This is incorrect because the initialzer for the class doesn't accept
# any arguments
#

# We are going to assume that a player imported 3 weapons in to test which is stronger
# the 3 weapon objects are created below. We have to compare them all and output the strongerst
# First we are just going to compare WD
# Next we will try and allow user to set up a tier list to find out
#

# Creating/initalizing an object CreateWeapon
# Assigning the set_name instance variable to the given
# id, name, wd, str, crit_base, crit_max, det_base, det_max, sks_base, sks_max, mat1, mat2
#
edengrace_axe = CreateWeapon.new(001, "Edengrace Axe", 122, 544, 467, 467, 0, 467, 327, 467, 'empty', 'empty')
edengrace_nosks_axe = CreateWeapon.new(002, "Edengrace No Skill Speed Axe", 122, 544, 467, 467, 327, 467, 0, 467, 'empty', 'empty')
augmented_deepshadow_axe = CreateWeapon.new(003, "Augmeented Deepshadow Axe", 121, 530, 323, 462, 462, 462, 0, 462, 'empty', 'empty')
the_kings_axe = CreateWeapon.new(004, "The King's Axe", 117, 476, 434, 434, 304, 434, 0, 434, 'empty', 'empty')
super_test_axe = CreateWeapon.new(005, "Super Axe", 150, 700, 600, 600, 500, 600, 0, 600, 'empty', 'empty')


item_arr = [
	edengrace_axe,
	edengrace_nosks_axe,
	augmented_deepshadow_axe,
	the_kings_axe,
	super_test_axe
]

previous_wd = 0
final_item = []
item_arr.each { |item|
	current_wd = item.weapon_damage
	current_sks = item.sks_base
	if (current_wd >= previous_wd)
		puts "Previous WD:	#{previous_wd}"
		puts "Current WD:	#{current_wd}"
		if (current_sks < SKS_NEEDED)
			puts "Current Weapons SKS:	#{item.sks_base}"
			puts "Not enough SKS, Moving onto next weapon"
			next
		else
			puts "Weapon has enough SKS needed"
			puts "previous is now the new"
			previous_wd = current_wd
			final_item.pop
			final_item.push(item)
		end

	else
		puts "Previous WD:	#{previous_wd}"
		puts "Current WD:	#{current_wd}"
		puts "Entered Condtiional, this current <= previous."
	end
}
puts final_item

# Materia solving algo
# We will use Eden grace SKS axe
# First check users SKS recommendation
#

SKS_NEEDED_2 = 380
mat1_stat = false
mat2_stat = false
while (mat1_stat == false) && (mat2_stat == false)
	
	mat1_stat = true
	mat2_stat = true
end
