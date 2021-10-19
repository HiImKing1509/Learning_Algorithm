th = int(input())
while(th != 0):
  n = int(input())
  l = []
  even = 0
  old = 0
  l = input()
  l = l.split()
  for i in range(len(l)):
    if l[i].isdigit():   
        l[i] = int(l[i])  
    else:
        l[i] = 0  
  for i in range (0, n):
    if l[i] % 2 == 0:
      even += 1
    else:
      old += 1
  if even != 0 and old != 0:
    print("YES")
  elif even == 0:
    if n % 2 == 0:
      print("NO")
    else:
      print("YES")
  elif old == 0:
    print("NO")
  th -= 1
