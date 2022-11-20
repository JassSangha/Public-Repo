import turtle
turtle.speed(10)
turtle.color('blue','cyan')
turtle.pensize(3)

# upper left
turtle.penup()
turtle.left(180)
turtle.forward(300)
turtle.right(90)
turtle.forward(130)
turtle.left(270)
turtle.forward(40)
turtle.pendown()

# Y
turtle.begin_fill()
turtle.left(-45)
turtle.forward(57)
turtle.left(90)
turtle.penup()
turtle.forward(56)
turtle.left(180)
turtle.pendown()
turtle.forward(57)
turtle.left(45)
turtle.forward(60)
turtle.end_fill()

turtle.penup()
turtle.left(90)
turtle.forward(50)
turtle.pendown()

# O
turtle.begin_fill()
turtle.forward(50)
turtle.left(90)
turtle.forward(100)
turtle.left(90)
turtle.forward(50)
turtle.left(90)
turtle.forward(100)
turtle.end_fill()

turtle.penup()
turtle.left(90)
turtle.forward(60)
turtle.left(90)
turtle.forward(100)
turtle.pendown()

# U
turtle.begin_fill()
turtle.left(180)
turtle.forward(100)
turtle.left(90)
turtle.forward(50)
turtle.left(90)
turtle.forward(100)
turtle.end_fill()

turtle.penup()
turtle.right(90)
turtle.forward(60)
turtle.pendown()

# L
turtle.begin_fill()
turtle.right(90)
turtle.forward(100)
turtle.left(90)
turtle.forward(50)
turtle.end_fill()

turtle.penup()
turtle.forward(10)
turtle.pendown()

# O
turtle.begin_fill()
turtle.forward(50)
turtle.left(90)
turtle.forward(100)
turtle.left(90)
turtle.forward(50)
turtle.left(90)
turtle.forward(100)
turtle.end_fill()

turtle.penup()
turtle.left(90)
turtle.forward(60)
turtle.pendown()

# S
turtle.begin_fill()
turtle.forward(50)
turtle.left(90)
turtle.forward(50)
turtle.left(90)
turtle.forward(50)
turtle.right(90)
turtle.forward(50)
turtle.right(90)
turtle.forward(50)
turtle.end_fill()

turtle.penup()
turtle.forward(10)
turtle.pendown()
 
# T
turtle.begin_fill()
turtle.forward(80)
turtle.left(180)
turtle.forward(40)
turtle.left(90)
turtle.forward(100)
turtle.end_fill()


turtle.exitonclick()