$n=gets.chomp.to_i
$i=0
while $i < $n
  x,y=gets.split.map(&:to_i)
  max=x+y
  min=(x>y) ? x : y
  puts "#{min} #{max}"
  $i=$i+1
end