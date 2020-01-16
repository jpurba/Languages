distances = [10,15,17,26,20]
times = [0.3,0.47,0.55,1.20,1.0]
# calculate speeds with python
speeds = []
for i in range(len(distances)):
    speeds.append(distances[i]/times[i])

print("distances: ", distances)
print("times: ", times)
print("speeds: ", speeds)
