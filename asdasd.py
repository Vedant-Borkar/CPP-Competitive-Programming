from collections import defaultdict

def solve():
    n = ini()
    a = ini()
    b = ini()
    arr = in(n*n)
    
    arr.sort()
    map = defaultdict(int)
    fillmap(map, arr)
    ar = []
    while map:
        f = min(map)
        ar.append(f)
        key = f
        del map[key]
        l = 0
        while True:
            if l == n-1:
                break
            if key + a in map:
                del map[key + a]
                key += a
                l += 1
            else:
                break
    
    if map or len(ar) != n:
        no()
        return
    
    for i in range(1, len(ar)):
        if ar[i] - ar[i-1] == b:
            pass
        else:
            no()
            return
    
    yes()

# You'll need to implement these functions according to their Java counterparts
def ini():
    pass

def in_():
    pass

def fillmap(map, arr):
    pass

def no():
    pass

def yes():
    pass

# Assuming this is the equivalent of your "out.close()" line in Java
def close():
    pass

# Assuming this is equivalent to your "sort()" function in Java
def sort(arr):
    arr.sort()

# Assuming this is equivalent to your "remove()" function in Java
def remove(map, key):
    del map[key]

def start():
    t = 1
    t = ini()
    while t > 0:
        solve()
        t -= 1
    close()

# Assuming you've called start() to initiate the process
start()
