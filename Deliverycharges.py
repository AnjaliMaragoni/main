class DeliveryCharges:
    def Totalbill(self,SpecialDay,Items,peakhour,Nightorder):
        sum=0
        for i in Items:
            if(i=="Pizza"):
                sum+=150
            if(i=="Burger"):
                sum+=100
            if(i=="Coke"):
                sum+=50
            if(i=="Brownies"):
                sum+=60
        gst=(sum*5)/100
        sum=sum+gst
        if(SpecialDay=="Yes"):
            sum+=50
        if(Peakhour=="Yes"):
            sum+=30
        if(Nightorder=="Yes"):
            sum+=20
        if(SpecialDay=="No" and Peakhour=="No" and Nightorder=="No"):
            sum+=20
        return sum
SpecialDay=input("SpecialDay:")
Items=input("Items:").split(',')
Peakhour=input("Peak hour:")
Nightorder=input("Night Order:")
ob=DeliveryCharges()
print("Total Bill:",ob.Totalbill(SpecialDay,Items,Peakhour,Nightorder))
