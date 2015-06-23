# -*- coding: utf-8 -*-

A,B,C,K = gets.chomp.split(/\s/).map(&:to_i)
S,T = gets.chomp.split(/\s/).map(&:to_i)

if S+T >= K
  puts (A-C)*S + (B-C)*T
else
  puts A*S + B*T
end
