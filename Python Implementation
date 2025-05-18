import matplotlib.pyplot as plt
processes = [(1, 0, 5), (2, 1, 3), (3, 2, 8), (4, 3, 6)]  # (ID, Arrival Time, Burst Time)
time, start_times, end_times = 0, [], []
for pid, at, bt in processes:
    start_times.append(time)
    time += bt
    end_times.append(time)
plt.barh(range(len(processes)), [et - st for st, et in zip(start_times, end_times)], left=start_times)
plt.yticks(range(len(processes)), [f"Process {p[0]}" for p in processes])
plt.xlabel("Time")
plt.ylabel("Processes")
plt.title("FCFS Scheduling Visualization")
plt.show()
