# -*- coding: utf-8 -*-
mountains = Array.new(10)
10.times do |i|
  height = gets.chomp.to_i
  mountains[i] = height
end

mountains.sort!{|a, b| b<=>a}

3.times do
  puts mountains.shift
end
