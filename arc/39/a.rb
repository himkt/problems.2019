# -*- coding: utf-8 -*-

a, b = gets.chomp.split(/\s/).map(&:to_i)

ans3 = a - b

if a >= b
  # a = a and b = b
  # a の100の位を9, bの100の位を1にする
  flag = (b - a).abs > (a - b).abs ? true : false
  unless flag
    loop do
      break if a - 900 >= 0
      a += 100
    end
  else
    loop do
      break if b - 100 <= 99
      b -= 100
    end
  end
  ans1 = a - b
  ans2 = -1000
else
  # a = b and b = a
  flag = (b - a).abs > (a - b).abs ? true : false
  unless flag
    loop do
      break if a - 900 >= 0
      a += 100
    end
  else
    loop do
      break if b - 100 <= 99
      b -= 100
    end
  end
  ans1 = -1000
  ans2 = a - b
end

puts [ans1,ans2,ans3].max
