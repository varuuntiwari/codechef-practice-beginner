def num_rev(x)
  $res=0
  while $x > 0 do
    $res=($res*10)+($x%10)
    $x=$x/10
  end
  return $res
end

$n=gets.chomp.to_i
$i=0
while $i < $n do
  $x=gets.chomp.to_i
  puts num_rev $x
  $i=$i+1
end