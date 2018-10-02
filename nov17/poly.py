def fun(lst ,x):
  return (lst[0]+lst[1]*x+lst[2]*x*x+lst[3]*x*x*x)
 
def sum(lst):
  return (lst[0]+lst[1]+lst[2]+lst[3])


t= input()
for _t in range(0,t):
  n=input()
  v = [[]]*n
  a0=10000000000000000000000000000
  for1=100000000000000000000000000
  ind=-1
  val=100000000000000000000000000000000000000000000000;
  for i in range(0,n):
    v[i]=list(map(int,raw_input().split()));
    fn=fun(v[i],100000)
    if(for1>sum(v[i])):
      for1=sum(v[i])
    if a0>v[i][0]:
      a0=v[i][0]
    print("Total score for {} is {}".format(fn, i))
    if val>fn:
      print(fn)
      val=fn
      ind=i
  q=input()
  print("Total score for {} is {}".format(ind,v[ind]))
  for _q in range(0,q):
    x=input()
    if x==0:
      print(a0)
    elif x==1:
      print(for1)
    else:
      print(fun(v[ind],x))    


  




