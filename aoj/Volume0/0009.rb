require 'prime'

while line = gets
  n = line.chomp.to_i
  ans = 0
  i = 1
  while i <= n
    ans += 1 if Prime.prime?(i)
    i += 1
  end
  puts ans
end
