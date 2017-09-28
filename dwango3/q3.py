def main():
    N = int(input())
    A = [0,0,0,0,0]
    count = 0

    for i in range(0, N):
        A[int(input())] += 1
    #print( A )

    #print( "only 4" )
    A,count = onlyFor(A, count)
    #print( count )
    #print()

    #print( "3 and 1" )
    A,count = trAndOn(A, count)
    #print( count )
    #print()

    #print( "2 and 2" )
    A,count = onlyTwo(A, count)
    #print( count )
    #print()

    #print( "2 and 1 and 1" )
    A,count = twAndOnAndOn(A, count)
    #print( count )
    #print()

    #print( "1 and 1 and 1 and 1" )
    A,count = onlyOn(A, count)
    #print( count )
    #print()

    #print( "only 3" )
    A,count = onlyThr(A, count)
    #print( count )
    #print()

    #print( "2 and 1" )
    A,count = twAndOn(A, count)
    #print( count )
    #print()

    #print( "1 and 1 and 1" )
    A,count = thOn(A, count)
    #print( count )
    #print()


    #print( "only 2" )
    A,count = two(A, count)
    #print( count )

    #print( "1 and 1" )
    A,count = twOn(A, count)
    #print( count )
    #print()

    #print( "only 1" )
    A,count = one(A, count)
    #print( count )
    #print()


    print( count )

def onlyFor(A, count):
    count = A[4]
    A[4] = 0
    return A, count


def trAndOn(A, count):
    if( A[1] <= A[3] ):
        count += A[1]
        A[3] -= A[1]
        A[1] = 0
    else:
        count += A[3]
        A[1] -= A[3]
        A[3] = 0
    return A, count

def onlyThr(A, count):
    tmp = A[3]
    A[3] = 0
    return A, count+tmp

def twAndOn(A, count):
    if( A[1] <= A[2] ):
        count += A[1]
        A[2] -= A[1]
        A[1] = 0
    else:
        count += A[2]
        A[1] -= A[2]
        A[2] = 0
    return A, count

def twAndOnAndOn(A, count):
    if( A[1] <= A[2]*2 ):
        #print( "under" )
        count += int(A[1]/2)
        A[2] -= int(A[1]/2)
        A[1] = A[1]%2
    else:
        #print( "upper" )
        count += A[2]
        A[1] -= A[2]*2
        A[2] = 0
    return A, count

def onlyTwo(A, count):
    tmp = int(A[2]/2)
    A[2] -= tmp*2
    return A, count+tmp

def two(A, count):
    tmp = A[2]
    A[2] = 0
    return A, count+tmp

def twOn(A, count):
    tmp = int(A[1]/2)
    A[1] -= tmp*2
    return A, count+tmp

def thOn(A, count):
    tmp = int(A[1]/3)
    A[1] -= tmp*3
    return A, count+tmp

def onlyOn(A, count):
    tmp = int(A[1]/4)
    A[1] -= tmp*4
    return A, count+tmp

def one(A, count):
    tmp = A[1]
    A[1] = 0
    return A, count+tmp



main()


