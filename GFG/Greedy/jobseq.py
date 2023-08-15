class Job:
    def __init__(self, id, deadline, profit):
        self.id = id
        self.deadline = deadline
        self.profit = profit

def job_sequencing(jobs):
    n = len(jobs)
    result = ['-'] * n  # stores the final job sequence
    slot = [False] * n  # keeps track of available time slots

    jobs.sort(key=lambda x: x.profit, reverse=True)  # sort jobs by profit in descending order

    for i in range(n):
        for j in range(min(n, jobs[i].deadline) - 1, -1, -1):
            if not slot[j]:
                result[j] = jobs[i].id
                slot[j] = True
                break

    # Print the job sequence
    print(' '.join(job for job in result if job != '-'))

jobs = [Job('a', 2, 100), Job('b', 1,50), Job('c', 2,10),
        Job('d', 1,20), Job('e', 3,30)]

job_sequencing(jobs)



# arr=[(4,70),(1,80),(1,30),(1,100)]
# arr=[(2,50),(2,60),(3,20),(3,30)]
# arr=[(2,100),(1,50),(2,10),(1,20),(3,30)]
# print(arr) 