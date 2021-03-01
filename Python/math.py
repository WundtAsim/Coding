import math


def SpaAtt(f=76,l=0.83):
    return((92.4 + 20*math.log10(l*1e-3) + 20*math.log10(f)))
print('76GHz,0.5m空间衰减为：{}dB\n'.format(SpaAtt()))


def calPr(RCS,R):
    EIRP = 32
    gr = 14
    f = 76e9
    lamb = 3e8/f
##    pr = (pow(10,EIRP/10)*pow(10,14/10)*pow(lamb,2)*pow(10,RCS/10))/(pow(4*math.pi,3)*pow(R,4))
##    print(str(10*math.log10(pr))+'dBm')
    pr = (EIRP+gr+10*math.log10(pow(lamb,2))+RCS)-(10*math.log10(pow(4*math.pi,3))+10*math.log10(pow(R,4)))
    return(pr)
print('30dBsm、2.5m目标功率为：{0}\n30dBsm、5m目标功率为：{1}\n两者功率差为：{2}\n'.format(calPr(30,2.5),calPr(30,5),calPr(30,2.5)-calPr(30,5)))

print('30dBsm、2.5m发射功率为：{0}dBm\n30dBsm、5m发射功率为：{1}dBm\n'.format(calPr(30,2.5)+SpaAtt(),calPr(30,5)+SpaAtt()))

print('-30dBsm、2.5m发射功率为：{0}dBm\n-30dBsm、5m发射功率为：{1}dBm\n'.format(calPr(-30,2.5)+SpaAtt(),calPr(-30,5)+SpaAtt()))

print('30m,RCS 25dBsm，模拟器接收{0}dBm,模拟器发射{1}dBm'.format(32-SpaAtt(),calPr(30,25)+SpaAtt()))

