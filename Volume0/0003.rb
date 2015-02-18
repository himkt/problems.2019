# -*- coding: utf-8 -*-

# a right triangle = 直角三角形

def judge_right(x, y, z)
  a = x ** 2 + y ** 2
  b = y ** 2 + z ** 2
  c = z ** 2 + x ** 2
  if a == z ** 2 || b == x ** 2 || c == y ** 2
    return true
  else
    return false
  end
end

N = gets.chomp.to_i

N.times do
  x, y, z = gets.chomp.split(" ").map{|item| item.to_i}
  if judge_right(x, y, z)
    puts "YES"
  else
    puts "NO"
  end
end
