# -*- coding: utf-8 -*-

hash = Hash.new
hash['R'] = 0
hash['B'] = 0
hash['.'] = 0

gets.chomp.to_i.times do
  gets.chomp.split(//).each do |s|
    hash['R'] += 1 if s == 'R'
    hash['B'] += 1 if s == 'B'
    hash['.'] += 1 if s == '.'
  end
end

puts "TAKAHASHI" if hash['R'] > hash['B']
puts "AOKI"      if hash['B'] > hash['R']
puts "DRAW"      if hash['R'] == hash['B']
