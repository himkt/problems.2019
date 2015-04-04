# -*- coding: utf-8 -*-

N, K = gets.chomp.split(/\s/).map(&:to_i)
sl = []
p N
p K
N.times do
  sl.push(gets.chomp.to_i)
end

i = 0

while sl[i+2]
  (ans = i+3; break) if ((sl[i] + sl[i+1] + sl[i+2]) < K)
  i += 1
end

if ans
  puts ans.to_s
else
  puts '-1'
end
