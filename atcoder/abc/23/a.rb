# -*- coding: utf-8 -*-
puts gets.chomp.split(//).map(&:to_i).inject{|sum,i|sum+=i}
