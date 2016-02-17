# -*- coding: utf-8 -*-

x, y = gets.chomp.split(/\s/).map(&:to_i)
k = gets.chomp.to_i

if y - k >= 0
  puts x + k
else
  puts 2*y + x - k
  # puts y + (x - (k - y))
end

