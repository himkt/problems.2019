count = 0

12.times do
  count += 1 if /r/ =~ gets
end

puts count
