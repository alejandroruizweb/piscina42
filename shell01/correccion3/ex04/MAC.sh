ifconfig | grep -w ether | sed "s/ether //" | tr -d " " | cut -c 2-24
