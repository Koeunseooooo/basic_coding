class Unit:
    hp = None
    normal_attack_dmg = None

    def attack(self,enemy_hp):
        return enemy_hp - self.normal_attack_dmg

class Warrior(Unit):
    # 체력(Health Point)
    hp = 200
    # 아래는 공격력
    normal_attack_dmg = 10
    power_strike_dmg = 20 # Warrior의 주특기

    def power_strike(self,enemy_hp):
        print("파워 스트라이크!! ")
        return enemy_hp-self.power_strike_dmg

    def drink_potion(self):
        print("체력회복!! ")
        self.hp = self.hp+10

class Slime(Unit):
    # 체력(Health Point)
    hp = 300
    # 아래는 공격력
    normal_attack_dmg = 15
    body_strike_dmg = 25 # Warrior의 주특기

    def body_attack(self,enemy_hp):
        print("몸통박치기!!! ")
        return enemy_hp-self.body_attack_dmg

warrior = Warrior()
slime = Slime()

while True:
    
    print("슬라임이 공격합니다.")
    print("1. 일반공격")
    print("2. 몸통박치기")

    slime_input = input('사용할 스킬의 번호를 입력세요. ')

    print("전사 체력 :", warrior.hp)
    if slime_input == "1":
        warrior.hp = slime.attack(warrior.hp)
    elif slime_input == "2":
        warrior.hp = slime.body_attack(warrior.hp)

    print("전사 체력 :", warrior.hp)

    if warrior.hp <= 0:  # 전사 체력이 0 이하라면 반복문 탈출.
        break

    print("")

    print("전사가 공격합니다.")
    print("1. 일반공격")
    print("2. 파워스트라이크")
    print("3. 포션사용")

    warrior_input = input("사용할 스킬의 번호를 입력하세요. ")

    print("슬라임 체력 :", slime.hp)

    if warrior_input == "1" :
        slime.hp = warrior.attack(slime.hp)
    elif warrior_input == "2" :
        slime.hp = warrior.power_strike(slime.hp)
    elif warrior_input == "3" :
        warrior.drink_potion()
        print("전사 체력 :", warrior.hp)

    print("슬라임 체력 :", slime.hp)

    if slime.hp <= 0:  # 슬라임 체력이 0 이하라면 반복문 탈출.
        break

print("게임을 종료합니다.")


# 캐릭터를 생성할 수 있게끔 만들것
# 캐릭터를 고를 수 있게끔 만들어도 괜찮을 듯
# 체력 출력 하는 거 조금 더 가독성 좋게 
# & 