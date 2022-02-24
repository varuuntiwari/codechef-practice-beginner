read t
for i in $(seq 1 $t); do
	read x
	if [ $x -lt 10 ]
	then
		echo "Thanks for helping Chef!"
	else
		echo "-1"
	fi
done