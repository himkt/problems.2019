# -*- coding: utf-8 -*-

num_arr = []

3.times do
  num_arr << gets.chomp.to_i
end

num_arr.sort{|v1,v2| v2<=>v1}.each do |num|
  puts num_arr.index(num) + 1
end
