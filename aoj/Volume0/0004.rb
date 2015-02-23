# -*- coding: utf-8 -*-
# ガウス・ジョルダンの消去法を使った実装も後でする

def solve(a, b, c, d, e, f)
  x = (e*c-b*f)/(a*e-b*d)
  y = (a*f-c*d)/(a*e-b*d)
  return x, y
end

while line = gets
  a, b, c, d, e, f = line.chomp.split(" ").map{|item| item.to_f}
  result = solve(a, b, c, d, e, f)
  printf("%.3f %.3f", result[0]+0, result[1]+0)
end
