# -*- coding: utf-8 -*-

a = gets.chomp.to_i
b = gets.chomp.to_i
c = a > b ? b : a
d = a > b ? a : b

pat1 = (a-b).abs
pat2 = ((c+10)-d).abs

puts pat1 > pat2 ? pat2 : pat1
