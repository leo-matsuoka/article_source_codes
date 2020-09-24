import random

print("三つの扉ゲーム")
doors=[1,2,3]

#正解の扉
answer=random.randint(1,3) 

# 回答者の選択
in_loop=0
while in_loop == 0:
  you = input("1から3の扉から一つ選んでください")
  if you in ("1","2","3"):
    you=int(you)
    in_loop=1

doors_copy=doors.copy()

# 司会者のオープン
if you != answer:
  doors.remove(you)
  doors.remove(answer)
elif you == answer:
  doors.remove(you)
open_door=random.choice(doors)
print("{0}の扉はハズレです。".format(open_door))

# 解答者の戦略選択
doors_copy.remove(you)
doors_copy.remove(open_door)
print("扉の選択を{0}から{1}に変更しますか"\
                .format(you,doors_copy[0]))
in_loop=0
while in_loop ==0:
  change=input("1: 変える ２：変えない")
  if change in ("1","2"):
    change=int(change)
    in_loop = 1
if change == 1:
  you = doors_copy[0]
elif change == 2:
  pass
print("正解は{0}".format(answer))

# 勝敗
if answer == you:
  print("You win")
else:
  print("You lose")
