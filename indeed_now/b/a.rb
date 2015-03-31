# -*- coding: utf-8 -*-

A = gets.chomp.to_i
B = gets.chomp.to_i

i = A
num = 0

while i <= B
  j = 1
  while j <= i
    num += i*j
    j += 1
  end
  i += 1
end

puts num % 1000000007
