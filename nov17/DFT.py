    #https://www.codechef.com/viewsolution/14637750
    p = 786433
    r = 10 # primitive root mod p
     
    def DFT(a, w, order):
        if len(a) == 1:
            return [a[0]]*order
        feven = DFT(a[0::2], w*w%p, order/2)
        fodd = DFT(a[1::2], w*w%p, order/2)
        res = [0]*order
        x, half_order = 1, order/2
        for i in xrange(order/2):
            res[i] = (feven[i] + x*fodd[i])%p
            res[i + half_order] = (feven[i] - x*fodd[i])%p
            x = x*w%p
        return res
     
    def calcPolynomialValues(a):
        dft = DFT(a, r, p-1)
        res = [0]*p
        res[0] = a[0]
        x = 1
        for i in xrange(p-1):
            res[x] = dft[i]
            x = x*r%p
        return res
     
    n = int(raw_input())
    a = map(int, raw_input().split())
    pol_values = calcPolynomialValues(a)
    q = int(raw_input())
    for i in xrange(q):
        t = int(raw_input())
        print pol_values[t]  