# -*- coding: utf-8 -*-

a = gets.chomp.to_i
b = gets.chomp.to_i

puts a % b != 0 ? b - a % b : 0
