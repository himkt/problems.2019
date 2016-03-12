# -*- coding: utf-8 -*-

puts gets.chomp.split(/\s/).map(&:to_i).sort[1]
