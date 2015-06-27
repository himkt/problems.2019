# -*- coding: utf-8 -*-

s = gets.chomp.split(//)
n = gets.chomp.to_i
i = 0
ans = ''

s.each do |j|
  s.each do |k|
    i += 1
    ans = "#{j}#{k}" if i == n
  end
end

puts ans
