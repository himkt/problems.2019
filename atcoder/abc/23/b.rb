# -*- coding: utf-8 -*-

def zero
  return 'b'
end

def one(str)
  return "a#{str}c"
end

def two(str)
  return "c#{str}a"
end

def three(str)
  return "b#{str}b"
end

n = gets.chomp.to_i
s = gets.chomp

i = 0

str = ''

while i < n
  if i == 0
    str = zero
  elsif i % 3 == 1
    str = one(str)
  elsif i % 3 == 2
    str = two(str)
  else
    str = three(str)
  end
  if str == s
    ans = i
    break
  end
  i += 1
end

if ans
  puts ans
else
  puts '-1'
end
