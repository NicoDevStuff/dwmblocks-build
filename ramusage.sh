#!/bin/bash

free -t | awk 'FNR == 2 {printf("%.0f%"), $3/$2*100}' 
