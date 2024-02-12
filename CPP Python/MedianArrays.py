from math import ceil,floor
def findMedianSortedArrays(self, a, b):
        c=[]
        i,j,m=0,0,0
        while i<len(a) and j<len(b):
            if a[i]<b[j]:
                c.append(a[i])
                i+=1
            else:
                c.append(b[j])
                j+=1
        c+=a[i:]
        c+=b[j:]
        if(len(c)%2==0):
            m=(c[floor((len(c)-1)/2)]+c[floor((len(c)-1)/2) + 1])/2
        else:
            m=(c[ceil((len(c)-1)/2)])
        print(c[floor(len(c)/2)])
        print(c[floor(len(c)/2) + 1])
        print(m)
        print(c)
findMedianSortedArrays(0,[1,3],[2])
 