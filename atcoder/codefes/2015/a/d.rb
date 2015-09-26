# -*- coding: utf-8 -*-

n, m = gets.chomp.split(/\s/).map(&:to_i)

x = []

m.times do
  x << gets.chomp.to_i
end
x << n

y = []
x.each_with_index do |x_i, index|
  break unless x[index+1]
  y << x[index+1] - x_i - 1
end

p y
