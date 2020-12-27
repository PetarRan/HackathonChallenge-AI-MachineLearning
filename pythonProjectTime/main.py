import time

x='yes'
i = 0

if (x== "yes"):
    start = time.time()
    while (i<30000000):
        i+=1

end = time.time()
print(end-start)
