import turtle,time
def DrawGap():
    turtle.penup()
    turtle.speed(0)
    turtle.fd(5)
    
def DrawLine(Draw):
    DrawGap()
    turtle.pendown() if Draw else turtle.penup()
    turtle.speed(0)
    turtle.fd(40)
    DrawGap()
    turtle.right(90)

def DrawNum(Num):
    DrawLine(True) if Num in [2,3,4,5,6,8,9] else DrawLine(False)
    DrawLine(True) if Num in [0,1,3,4,5,6,7,8,9] else DrawLine(False)
    DrawLine(True) if Num in [0,2,3,5,6,8,9] else DrawLine(False)
    DrawLine(True) if Num in [0,2,6,8] else DrawLine(False)
    turtle.left(90)
    DrawLine(True) if Num in [0,4,5,6,8,9] else DrawLine(False)
    DrawLine(True) if Num in [0,2,3,5,6,7,8,9] else DrawLine(False)
    DrawLine(True) if Num in [0,1,2,3,4,7,8,9] else DrawLine(False)
    turtle.left(180)
    turtle.penup()
    turtle.speed(0)
    turtle.fd(20)#forward to next number
    
def DrawDate(Date):
    turtle.pencolor("red")
    for i in Date:
        if i == '-':
            turtle.write('年',font=("Arial",18,"normal"))
            turtle.pencolor("green")
            turtle.fd(40)
        elif i == '+':
            turtle.write('月',font=("Arial",18,"normal"))
            turtle.pencolor("blue")
            turtle.fd(40)
        elif i == '=':
            turtle.write('日',font=("Arial",18,"normal"))
            turtle.pencolor("black")
            turtle.fd(40)
        elif i == '*':
            turtle.write('时',font=("Arial",18,"normal"))
            turtle.pencolor("purple")
            turtle.fd(40)
        elif i == '/':
            turtle.write('分',font=("Arial",18,"normal"))
        else:
            DrawNum(eval(i))
    
    

def main():
    turtle.setup(1500,300,200,400)
    turtle.penup()
    turtle.speed(0)
    turtle.fd(-600)
    turtle.pensize(5)
    #DrawDate("2014-11+23=11*11/")
    DrawDate(time.strftime("%Y-%m+%d=%H*%M/"))
    turtle.hideturtle()
    turtle.done()
    
main()