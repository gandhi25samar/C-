a=int(input())
for w in range(a):
    n=int(input())
    s=input()
    if ((n%2)!=0):
        print("No")
    else:
        print("Yes")
        o=0
        z=0
        for i in s:
            if int(i)==0:
                z+=1
            else:
                o+=1
        l=abs(z-o)/2
        if l==0:
            t1="10"
            t2="01"
            in=s.index(t1) or s.index(t2)
            print((in+1),(in+2))
        else:
            if z>o:
                txt="0"*l;
                in=s.index(txt)
                print((in+1),(in+l-1))
            else:
                txt="1"*l;
                in=s.index(txt)
                print((in+1),((in+l)-1))