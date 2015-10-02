# -*- coding: utf-8 -*-

score = 0

3.times do
  line = gets.chomp.split(/\s/).map(&:to_f)
  score += line[0]*(line[1]/10)
end

puts score.to_i
