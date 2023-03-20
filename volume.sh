#!/bin/bash

if [ $(pamixer --get-volume) = 0 ]; then
	echo "MUTE"
else
	echo "$(pamixer --get-volume)%"
fi
