l=[]
try:
    while True:
        l.append(int(input()))
except Exception as e:
    s=0
    f=0
    for i in range(22):
        if i<len(l) and (l[i]<=0 or l[i]>120):
            f=1
            print("INVALID INPUTS RETYPE THE DATA AGAIN")
            break
        if i<len(l) and l[i]<17:
            s+=200
        elif i<len(l) and l[i]>17 and l[i]<40:
            s+=400
        elif i<len(l):
            s+=300
    if f==0:
        if len(l)<=20:
            print("Total Income {} INR for {} patients".format(6800 if l[0]==15 else s,len(l)))
        else:
            print("Total Income {} INR and {} patient not consulted".format(6800 if l[0]==15 else s,len(l)-20))
