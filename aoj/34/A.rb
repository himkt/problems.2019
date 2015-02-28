# -*- coding: utf-8 -*-

score = Array.new

gets.chomp.to_i.times do
  a, b, c, d, e = gets.chomp.split(" ").map{|item| item.to_i}
  score.push(a+b+c+d+(e*(11.0/90.0)))
end

puts score.max
