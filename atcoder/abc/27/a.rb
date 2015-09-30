# -*- coding: utf-8 -*-

edges = gets.chomp.split(/\s/).map(&:to_i)

edges.each do |edge|
  (puts edge; break)if edges.count(edge).odd?
end
