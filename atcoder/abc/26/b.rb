# -*- coding: utf-8 -*-

N = gets.chomp.to_i
arr = []
ans = 0

N.times do
  arr.push(gets.chomp.to_i)
end

arr = arr.sort

flag = true

arr.each do |i|
  if flag
    ans += i ** 2
    flag = false
  else
    ans -= i ** 2
    flag = true
  end
end

puts (ans*Math::PI).abs
