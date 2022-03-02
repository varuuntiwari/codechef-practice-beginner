t=gets.chomp.to_i
for i in 0...t
  str=gets.chomp
  l=str.length
  # Splitting string on basis of length
  if l%2 != 0
    str1=str[0, l/2]
    str2=str[(l/2)+1, l-1]
  else
    str1=str[0, l/2]
    str2=str[l/2, l-1]
  end
  # Check for char similarity and number of chars
  arr1 = str1.split("").sort()
  arr2 = str2.split("").sort()
  if arr1 == arr2
    puts "YES"
  else
    puts "NO"
  end
  
end