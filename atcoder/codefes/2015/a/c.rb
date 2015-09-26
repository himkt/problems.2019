# -*- coding: utf-8 -*-
 
N, t = gets.chomp.split(/\s/).map(&:to_i)
 
a = []
b = []
c = []
 
N.times do
  elem = gets.chomp.split(/\s/).map(&:to_i)
  a.push(elem[0])
  b.push(elem[1])
  c.push(elem[1]-elem[0])
end
 
count = 0
 
if t >= b.inject(:+)
  loop do
    if t >= a.inject(:+)
      puts count
      break
    end
    min_index = c.index(c.min)
    a[min_index] = b[min_index]
    c[min_index] = 0
    count += 1
  end
else
  puts "-1"
end
