require 'prime'

len = ARGV[0].to_i
B = 10 ** len
B2 = B << 1
pi = (len * 8 + 1).step(3, -2).inject(B) {|a, i| (i >> 1) * (a + B2) / i} - B
pi = "3#{pi}"

i = pi.split(//)

arr = []

10.times do
  arr.push(i.shift)
end


loop do
  num = arr.join.to_i
  (p num;break) if Prime.prime?(num)
  arr.shift
  arr.push(i.shift)
  num = arr.join.to_i
  (p num; break) if Prime.prime?(num)
end

