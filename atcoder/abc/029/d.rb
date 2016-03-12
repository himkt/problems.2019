# -*- coding: utf-8 -*-

N = gets.chomp.to_i
count = 0

(0..N).each do |n|
  count += n.to_s.count("1")
end

puts count
