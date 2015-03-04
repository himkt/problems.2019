# -*- coding: utf-8 -*-

while input = gets
  input = input.chomp.split(' ').map(&:to_i)
  puts "#{input[0].gcd(input[1])} #{input[0].lcm(input[1])}"
end
