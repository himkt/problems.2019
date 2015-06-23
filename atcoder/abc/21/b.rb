# -*- coding: utf-8 -*-

N = gets.chomp.to_i
a, b = gets.chomp.split(/\s/).map(&:to_i)
K = gets.chomp.to_i
P = gets.chomp.split(/\s/).map(&:to_i)

P.push(a)
P.push(b)

if P.size == P.uniq.size
  puts "YES"
else
  puts "NO"
end
