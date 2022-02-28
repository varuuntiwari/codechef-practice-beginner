$t=gets.chomp.to_i
while $t > 0 do
  $t-=1
  $n=gets.chomp.to_i
  $str=gets.chomp
  if $str.count('I')>0 then
    puts "INDIAN"
    
  elsif $str.count('Y')>0 then
    puts "NOT INDIAN"
  else
    puts "NOT SURE"
  end
end