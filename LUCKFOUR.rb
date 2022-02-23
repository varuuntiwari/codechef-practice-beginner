def get_four(x)
  $count=0
  while $x != 0 do
    if $x%10 == 4
      $count=$count+1
    end
    $x=$x/10
  end
  puts $count
end

$n=gets.chomp.to_i
$i=0
while $i < $n do
  $x=gets.chomp.to_i
  get_four($x)
  $i=$i+1
end