# -*- coding: utf-8 -*-

item = gets.chomp.split(/\s/).map(&:to_i)

puts item[0] % item[1] == 0 ? "YES" : "NO"
