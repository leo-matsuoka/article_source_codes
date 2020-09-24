import random

print("三つの扉シミュレーション")

#カウンタの初期化
win=0
lose=0

for i in range(1,100000):
  change=1      # 戦略の固定
  doors=[1,2,3]

  answer=random.randint(1,3)
  you=random.randint(1,3)

  doors_copy=doors.copy()

  if you != answer:
    doors.remove(you)
    doors.remove(answer)
  elif you == answer:
    doors.remove(you)

  open_door=random.choice(doors)
  doors_copy.remove(you)
  doors_copy.remove(open_door)

  if change == 1:
    you = doors_copy[0]
  elif change == 2:
    pass

  if answer == you:
    win=win+1
  else:
    lose=lose+1

print(win)
print(lose)
