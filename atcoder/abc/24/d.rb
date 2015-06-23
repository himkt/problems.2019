# -*- coding: utf-8 -*-

i = gets.chomp.to_i
j = gets.chomp.to_i



def get_value(i,j)
  if i == 1 || j == 1
    return 1
  else
    return get_value(i,j-1) + get_value(i-1,j)
  end
end

p get_value(i,j)
