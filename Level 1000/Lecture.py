n, m = map(int, input().split())
l1 = []
l2 = []
for i in range (0, m):
  s = str(input())
  a, b = s.split(' ', 1)
  l1.append(a)
  l2.append(b)
ss = str(input())
l = ss.split()
res = []
for i in range (0, n):
  j = l1.index(l[i])
  if len(l1[j]) <= len(l2[j]): res.append(l1[j])
  else: res.append(l2[j])
print(' '.join(res))
