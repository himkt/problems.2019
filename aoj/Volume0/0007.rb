# -*- coding: utf-8 -*-

week = gets.chomp.to_i
dept = 100000

def loan i, dept
  return i>1 ? loan(i-1, (dept*1.05/1000.0).ceil*1000) : (dept*1.05/1000.0).ceil*1000
end

puts loan week, dept
