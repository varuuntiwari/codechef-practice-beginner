$n=gets.chomp.to_i
$i=0
while $i < $n
  $x=gets.chomp.to_i
  $x1=$x
  $res=0
  while $x != 0
    $y=$x%10
    $res=$res*10 + $y
    $x/=10
  end
  if $res == $x1
    puts "wins"
  else
    puts "loses"
  end
  $i+=1  
end