# -*- coding: utf-8 -*-

N,T = gets.chomp.split(/\s/).map(&:to_i)
A = []
N.times do
  A << gets.chomp.to_i
end


sum = 0
i = 0
while true
  (sum += T;break) unless A[i+1]
  if A[i+1] - A[i] > T
    sum += T
  else
    sum += A[i+1] - A[i]
  end
  i += 1
end

puts sum
