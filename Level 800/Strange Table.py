t = int(input())
while t != 0:
  n, m, x = map(int, input().split())
  x-=1
  column = int(x/n)
  row = int(x%n)
  print(round(row*m + column + 1))
  t-=1
