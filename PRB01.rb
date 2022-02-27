t=gets.chomp.to_i
while t > 0
  n=gets.chomp.to_i
  lim=Math.sqrt(n).to_i
  flag=1
  for i in 2..lim
    if n == 2
      break
    end
    if n%i == 0
      flag=0
      break
    end
  end
  if n < 2
    flag=0
  end
  if flag==1
    puts "yes"
  else
    puts "no"
  end
  t-=1
end