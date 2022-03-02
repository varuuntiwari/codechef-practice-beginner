t=gets.chomp.to_i
for i in 0...t
  n, k = gets.chomp.split.map(&:to_i)
  max = -1
  for j in 1..k
    if n%j > max
      max = n%j
    end
  end
  puts max
end