ifconfig | grep 'ether ' | sed 's/ether //g' | sed 's/ //g' | awk '{ print $1 }'
