# -*- coding: utf-8 -*-

n, r = gets.chomp.split(/\s/).map(&:to_i)
s    = gets.chomp.split(//)


num = 0

loop do
  flag = false
  break unless s.include?('.')
  if s.size > r
    s.shift
    num += 1
    next
  end
  break unless s.include?('.')
  flag = false
  i = 0
  if s[0] = '.'
    while i <= r-1
      if s[i] = '.'
        s[i] = 'o'
        i += 1
        flag = true
      end
    end
    num += 1 if flag
  end
end

puts num
