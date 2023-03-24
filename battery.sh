#!/bin/bash

if [ $(cat /sys/class/powe_supply/AC/online) = "1"]; then
	echo "⚡🔋 $(echo /sys/class/powe_supply/BAT1/capacity)%"
else
	echo "🔋 $(echo /sys/class/powe_supply/BAT1/capacity)%"
fi
