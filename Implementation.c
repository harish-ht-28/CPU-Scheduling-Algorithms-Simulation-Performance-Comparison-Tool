#include <stdio.h>
typedef struct {
    int id, arrival_time, burst_time, priority, waiting_time, turnaround_time;
} Process;
void fcfs(Process p[], int n) {
    int time = 0;
    printf("\nFCFS Scheduling:\n");
    for (int i = 0; i < n; i++) {
        p[i].waiting_time = time - p[i].arrival_time;
        p[i].turnaround_time = p[i].waiting_time + p[i].burst_time;
        time += p[i].burst_time;
        printf("Process %d: Waiting Time: %d, Turnaround Time: %d\n", p[i].id, p[i].waiting_time, p[i].turnaround_time);
    }
}
int main() {
    int n = 4;
    Process p[] = {{1, 0, 5, 2}, {2, 1, 3, 1}, {3, 2, 8, 3}, {4, 3, 6, 4}};
    fcfs(p, n);
    return 0;
}
