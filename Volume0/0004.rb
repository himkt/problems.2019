# -*- coding: utf-8 -*-

a, b, c, d, e, f = gets.chomp.split(" ").map{|item| item.to_f}

x = (c-f) / (a-d)
y = (c-a)/b * x

puts x
puts y
