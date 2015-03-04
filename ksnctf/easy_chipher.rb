# -*- coding: utf-8 -*-

char  = []
('A'..'z').each do |i|
  char << i
end

input = ''
while line = gets.chomp
  break if line == '.'
  input += line
end

num = 1

loop do
  input.split(//).each do |item|
    if item != ' '
      index = char.index(item)
      if index
        str = char[index+num]
        print str
      end
    else
      print item
    end
  end
  print '\n'
  num += 1
  p num
  break if num == 58
end
