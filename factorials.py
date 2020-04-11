//Factorial! 
//https://www.hackerearth.com/practice/basic-programming/input-output/basics-of-input-output/practice-problems/algorithm/find-factorial/
def fact():
    f =1
    for i in range(1,n+1): 
        f = f * i
    return f
n = int(input())
print(fact())
