# -*- coding: utf-8 -*-

N = gets.chomp.to_i
A = gets.chomp.split(/\s/).map(&:to_i)

s = A[0]

A.each_with_index do |a,i|
  next if i == 0
  s = 2 * s + a
end

p s
