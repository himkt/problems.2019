require 'prime'
while line = gets
  puts Prime.each(line.to_i).count
end
