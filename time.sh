#!/bin/bash

echo "🕑 $(date '+%H:%M:%S') "
sleep 1s;
pkill -RTMIN+2 dwmblocks
