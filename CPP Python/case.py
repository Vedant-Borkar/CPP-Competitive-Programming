s=input()
if(s[0].islower()):
  s=s.lower()
  s=s[0].upper()+s[1:]
print(s)