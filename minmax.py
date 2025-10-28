def minmax(a,n):
    if  n==1:
        return a[0],a[0]
    maxval,minval=minmax(a,n-1)
    
    maxval=max(maxval,a[n-1])
    minval=min(minval,a[n-1])
    
    return maxval,minval
    
a=[10,20,30,40]
n=len(a)
maximum,minimum=minmax(a,n)
print('maximum value',maximum)
print('minimum value',minimum)
