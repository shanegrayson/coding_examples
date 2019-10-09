#! /usr/bin/env ruby
#

family = {  uncles: ["bob", "joe", "steve"],
            sisters: ["jane", "jill", "beth"],
            brothers: ["frank","rob","david"],
            aunts: ["mary","sally","susan"]
          }

newFamily = family.select do |k, v|
	k == :sisters || k == :brothers
end

arr = newFamily.values.flatten

p arr
