# -*- coding: utf-8 -*-

def return_multiplied(x, y)
  z = x * y
  multiplied = "#{x}x#{y}=#{z}"
  return multiplied
end

for x in 1..9
  for y in 1..9
    puts return_multiplied(x, y)
  end
end
