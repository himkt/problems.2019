# -*- coding: utf-8 -*-

def f a,b,c
  t = 0.0
  loop do
    if (a*t + b * Math.sin(c*t*Math::PI) - 100).abs <= 10.0 ** -2
      return t
    end
    t += 0.00001
  end
end

a,b,c = gets.chomp.split(' ').map(&:to_f)

puts f(a,b,c)
