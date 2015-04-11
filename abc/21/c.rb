# -*- coding: utf-8 -*-

N = gets.chomp.to_i
a, b = gets.chomp.split(/\s/).map(&:to_i)
M = gets.chomp.to_i
x = []


M.times do
  x.push(gets.chomp.split(/\s/).map(&:to_i))
end

p x
