t = int(input())
while t != 0:
  n = int(input())
  l = list(input())
  zero = 0
  for i in l:
    if i == '0': zero += 1
  ans = []
  if zero > (2 * n - 1 - zero):
    for i in range (0, n):
      ans.append('0')
  else:
    for i in range (0, n):
      ans.append('1')
  print(''.join(ans))
  t -= 1
