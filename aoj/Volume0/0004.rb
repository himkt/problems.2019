# -*- coding: utf-8 -*-

def solve(a, b, c, d, e, f)
  x = ((e*c-b*f)*1.0/(a*e-b*d)*1000).round/1000.0
  y = ((a*f-d*c)*1.0/(a*e-b*d)*1000).round/1000.0
  return x, y
end

while line = gets
  line.chomp!
  a, b, c, d, e, f = line.chomp.split(" ").map{|item| item.to_f}
  result = solve(a, b, c, d, e, f)
  puts "%.3f %.3f" % [result[0], result[1]]
end
