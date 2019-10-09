#! /usr/bin/env ruby
#

h1 = { k1: 'h1', k2: 'h2', k3: 'h3' }

p h1.keys
p h1.values

h1.each { |k, v| p "#{k}" }
h1.each { |k, v| p "#{v}" }
h1.each { |k, v| p "#{k}: #{v}" }
