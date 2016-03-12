# -*- coding: utf-8 -*-

N = gets.chomp
A = gets.chomp.split.map(&:to_f)

puts (A.inject{|sum, a| sum += a} / (A.size - A.count(0))).ceil
