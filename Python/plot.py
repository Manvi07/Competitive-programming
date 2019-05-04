import matplotlib.pyplot as plt
f=open("new.txt","r")
list=[]
list1=[]
line = f.readline()
N=60
for i in range(N):
    line = f.readline()
    p,q,r,s,*first, middle, last = line.split()
    b,c=middle.split("=")
    list.append(c)
    list1.append(s)
    print (list1[i]," ", list[i])
f.close()

# plotting the points
plt.plot(list1, list)

# naming the x axis
plt.xlabel('x - axis')
# naming the y axis
plt.ylabel('y - axis')

plt.title('My first graph!')

# function to show the plot
plt.show()
