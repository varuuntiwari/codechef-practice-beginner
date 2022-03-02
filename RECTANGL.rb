t=gets.chomp.to_i
for i in 0...t
  arr=gets.chomp.split.map(&:to_i).sort()
  if arr[0] == arr[1] and arr[2] == arr[3]
    puts "YES"
  else
    puts "NO"
  end
end