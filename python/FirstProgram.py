# def cal_fact(n):
#     fact = 1
#     for i in range (1,n+1):
#         fact*=i
#         print(fact)
# cal_fact(6)        


# def convertor(usd_val):
#     inr_val = usd_val * 83
#     print(usd_val,"USD=",inr_val,"INR")
# convertor(100)


# def show(n):
#     if (n == 0):
#         return 
#     print(n)
#     show(n-1)
#     print("END")
# show(3)


# def fact(n):
#     if (n==0 or n==1):
#         return 1
#     else:
#         return n*fact(n-1)
# print(fact(4))
     

# def string_operations(s):
#     print("Original string:", s)
#     print("Uppercase:", s.upper())
#     print("Lowercase:", s.lower())
#     print("Title case:", s.title())
#     print("Reversed string:", s[::-1])
#     print("Substring replacement:", s.replace("Welcome", "Hello"))


# s = "Welcome"
# string_operations(s)



# for i in range(1,6):
#     print("hello world!!!")




# def outer_func(a,b):
#     def inner_func(c,d):
#         return c + d
#     return inner_func(a,b)
#     return a
# result = outer_func(5,10)
# print(result)


# def disp():
#     def show():
#         print("show function")
#     print("Display Function")
#     show()
# disp()        




# def disp(sh):
#     print("Display Function + sh()")
# def show():
#     return "Show Function"
# disp(show)




# def show(name,age):
#     print(name,age)
# show(age = 20 ,name= "ateeb",rollno = 9)





# def display_function(*args):
#     for i in args:
#         print(i)
# display_function(name = "Emma",age = 25)




# class Employee():
#     def __init__(self,role,dept,salary):
#         self.role=role
#         self.dept=dept
#         self.salary=salary
#     def showdetails(self):
#         print("role=",self.role,)
#         print("dept=",self.dept,)
#         print("salary=",self.salary)
# class Engineer(Employee):
#     def __init__(self,name,age):
#         self.name = name
#         self.age = age 
#         super().__init__("Engineer","IT","75,000")        
# engg1 = Engineer("Elon Musk",50)
# engg1.showdetails()




# list1=[1,"a","abc",[2,3,4,5],8,9]
# print(len(list1))


# list2=[1,2,3,4,5,6,7,8,9,10]
# print(list2[::3])

# states = ("Delhi",)
# print(type(states))

# message = "an apple a day keeps the doctor away"
# print(message.count("o"))


# class Car():
#     def __init__(self):
#         self.speed = 0
#     def __del__(self):
#         print("the object is out of scope")
# ioniq = Car()
# del ioniq


# class BankAccount():
#     def __get_atm_pin(self):
#         print("******")
# my_bank = BankAccount()
# print(my_bank._BankAccount__get_atm_pin())



#INHERITANCE EXAMPLE : using super() built function method !!!!!


# class Person():
#     def __init__(self,name,gender):
#         self.name = name
#         self.gender = gender
#     def print_Person_details(self):
#         print("name : ",self.name)
#         print("gender : ",self.gender)
# class Teacher(Person):
#     def __init__(self,name,gender,specialization):
#         super().__init__(name,gender)
#         self.specialization = specialization
#     def print_Teacher_details(self):
#         super().print_Person_details()
#         print("specialization : ",self.specialization)
# new_teacher = Teacher('Ateeb','Male','CSE CORE')
# new_teacher.print_Teacher_details()



                     #OR


# class Person():
#     def __init__(self,name,gender):
#         self.name = name
#         self.gender = gender
#     def print_Person_details(self):
#         print("name : ",self.name)
#         print("gender : ",self.gender)
# class Teacher(Person):
#     def __init__(self,name,gender,specialization):
#         Person.__init__(self,name,gender)
#         self.specialization = specialization
#     def print_Teacher_details(self):
#         Person.print_Person_details(self)
#         print("specialization : ",self.specialization)
# new_teacher = Teacher('Ateeb','Male','CSE CORE')
# new_teacher.print_Teacher_details()
 



#METHOD OVERRIDING EXAMPLE : two times print_details we used and the one used in derived class overrides the one used in the base class


# class Person():
#     def __init__(self,name,gender):
#         self.name = name
#         self.gender = gender
#     def print_details(self):
#         print("name : ",self.name)
#         print("gender : ",self.gender)
# class Teacher(Person):
#     def __init__(self,name,gender,specialization):
#         super().__init__(name,gender)
#         self.specialization = specialization
#     def print_details(self):
#         super().print_details()
#         print("specialization : ",self.specialization)
# new_teacher = Teacher('Ateeb','Male','CSE CORE')
# new_teacher.print_details()

#containorship example

# class MusicPlayer():
#     def __init__(self):
#         self.status = False
#         self.play_list = []
#     def Play_Music(self):
#         for music in self.play_list :
#             print(music)
# class Car():
#     def __init__(self):
#         self.player = MusicPlayer()
# alto = Car()
# alto.player.status = True
# print(alto.player.Play_Mu8sic())

#code for printing star pattern !!!!!!!

# rows = int(input("Enter the number of rows :" )) 
# for i in range(0, rows):  
#         for j in range(0, i + 1):  
#             print("* ",end = " ")       
#         print() 
 
import math

try:
    import matplotlib.pyplot as plt
except ModuleNotFoundError:
    print("Error: matplotlib is not installed. Please install it using 'pip install matplotlib' and try again.")
    exit()

# Define the differential equation as a function
def dydx(y):
    # Function representing the derivative
    try:
        return 0.5 * math.pi * math.sqrt(1 - y**2)
    except ValueError:
        print("Error: Attempted to compute sqrt of a negative number. Ensure y stays within [-1, 1].")
        exit()

# Initial conditions
x0 = 0       # Initial x value
y0 = 0       # Initial y value (y(0) = 0)
h = 0.1      # Step size
n = 10       # Number of steps to compute

# Initialize arrays to store x and y values for plotting and analysis
x_values = [x0]
y_values = [y0]

# Euler's method loop
x = x0
y = y0

for i in range(n):
    # Compute the next y value using Euler's method
    y_next = y + h * dydx(y)
    
    # Increment x by step size h
    x = round(x + h, 1)
    
    # Append the new values to the lists
    x_values.append(x)
    y_values.append(y_next)

    # Update y for the next iteration
    y = y_next

    # Ensure y does not exceed the domain of the square root (prevent complex numbers)
    if y > 1:
        print("Warning: y exceeded 1, stopping to avoid invalid square root.")
        break

# Print the results
print("x values:", x_values)
print("y values:", y_values)

# Plot the results
if 'plt' in globals():
    plt.figure(figsize=(8, 6))
    plt.plot(x_values, y_values, marker='o', label="Euler's Method")
    plt.title("Euler's Method for dy/dx = (1/2) * pi * sqrt(1 - y^2)")
    plt.xlabel("x")
    plt.ylabel("y")
    plt.grid()
    plt.legend()
    plt.show()