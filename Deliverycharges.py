class DeliveryCharges:
    def Charges(self,SpecialDay,Items,Peakhour,NightOrder):
        totalbill=0
        for i in Items:
            if(i=="Pizza"):
                totalbill+=150
            if(i=="Burger"):
                totalbill+=100
            if(i=="Coke"):
                totalbill+=50
            if(i=="Brownies"):
                totalbill+=60
        gst=(totalbill*5)/100
        totalbill+=gst
        if(Peakhour=="Yes"):
            totalbill+=30
        if(SpecialDay=="Yes"):
            totalbill+=50
        if(NightOrder=="Yes"):
            totalbill+=20
        if(Peakhour=="No" and SpecialDay=="No" and NightOrder=="No"):
            totalbill+=20
        return totalbill
SpecialDay=input()
Items=input().split(',')
Peakhour=input()
NightOrder=input()
ob=DeliveryCharges()
print(ob.Charges(SpecialDay,Items,Peakhour,NightOrder))
