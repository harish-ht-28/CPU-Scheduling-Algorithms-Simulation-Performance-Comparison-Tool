#!/bin/bash
declare -A process
process[1]="0 5"
process[2]="1 3"
process[3]="2 8"
process[4]="3 6"
echo "Executing FCFS Scheduling..."
time=0
for pid in "${!process[@]}"; do
    read -r at bt <<<"${process[$pid]}"
    echo "Process $pid starts at $time and runs for $bt units"
    time=$((time + bt))
done
