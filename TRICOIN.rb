t=gets.chomp.to_i
for i in 0...t
  x=gets.chomp.to_i
  height=0
  iter=1
  while x>=iter do
    height+=1
    x-=iter
    iter+=1
  end
  puts height
end