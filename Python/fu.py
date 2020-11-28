temp = input()
if temp[0:3] in ['RMB','rmb']:
    print("USD{:.2f}".format(eval(temp[3:])/6.78))
elif temp[0:3] in ['USD','usd']:
    print("RMB{:.2f}".format(eval(temp[3:])*6.78))
else:
    print("")
