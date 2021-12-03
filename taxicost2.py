class Taxi:
    def cost(self,km):
        if(km<=3):
            m=50
            s=80
            sv=100
        if(km>3 and km<=5):
            m=50+(km-3)*10
            s=80
            sv=100
        if(km>5 and km<=18):
            m=50+(km-3)*10
            s=80+(km-5)*12
            sv=100+(km-5)*15
        if(km>18 and km<=20):
            m=200+(km-18)*8
            s=80+(km-5)*12
            sv=100+(km-5)*15
        if(km>20 and km<=75):
            m=216+(km-20)*8
            s=260+(km-20)*10
            sv=325+(km-20)*12
        if(km>75 and km<=100):
            m=km*8
            s=260+(km-20)*10
            sv=325+(km-20)*12
        if(km>100):
                m=km*8
                s=km*10
                sv=325+(km-20)*12
        d={}
        if ph not in d:
            d[ph]=1
            m=m-((m*25)/100)
            s=s-((s*25)/100)
            sv=sv-((s*25)/100)
        else:
            d[ph]+=1
            if d[ph]%2!=0:
                m=m-((m*10)/100)
                s=s-((s*10)/100)
                sv=sv-((s*10)/100)
        print("Mini-RS.",m,"Sedan-RS.",s,"SUV-RS.",sv)
ob=Taxi()
for i in range(int(input())):
    km=int(input())
    ph=int(input())
    ob.cost(km)
