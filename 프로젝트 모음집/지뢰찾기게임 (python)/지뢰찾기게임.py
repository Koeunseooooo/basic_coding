import sys
import pygame
from math import floor
from random import randint
from pygame.locals import QUIT, MOUSEBUTTONDOWN

WIDTH=20 #가로 크기
HEIGHT=15 #세로 크기
SIZE=50 #창 크기
NUMOFBOMB=20
EMPTY=0 #아무것도 없음(열려있지 않음)
BOMB=1 #폭탄 있음(열려있지 않음 -> 열면 즉시 게임오버)
OPEN=2 #이미 열려있음(비어있음)
NUMOFOPEN=0 
CHECK=[[0 for _ in range(WIDTH)]for _ in range(HEIGHT)] #지뢰판 확인 여부를 알 수 있는 배열

pygame.init() #pygame 초기화
SURFACE=pygame.display.set_mode([WIDTH*SIZE,HEIGHT*SIZE])
FPSCLOCK=pygame.time.Clock()

#폭탄 개수 확인
def bombNum(field,x_pos,y_pos):
    count = 0
    for i in range(x_pos-1,x_pos+2):
        for j in range(y_pos-1,y_pos+2):
            if 0 <= i < WIDTH and 0 <= j < HEIGHT and field[j][i] == BOMB:
                count+=1
    return count
                
#타일 열기
def opentile(field,X_POS,Y_POS):
    global NUMOFOPEN
    if CHECK[Y_POS][X_POS]:
        return

    CHECK[Y_POS][X_POS]=True

    for i in range(X_POS-1,X_POS+2):
        for j in range(Y_POS-1,Y_POS+2):
            if 0 <= i < WIDTH and 0 <= j < HEIGHT and field[j][i]==EMPTY:
                field[j][i]=OPEN 
                NUMOFOPEN=NUMOFOPEN+1
                count =bombNum(field,i,j)
                if count==0 and not (i == X_POS and j == Y_POS):
                    opentile(field,i,j)



def main():
    smallfont = pygame.font.SysFont(None, 36)
    largefont = pygame.font.SysFont(None, 72)
    message_clear = largefont.render("!!CLEARED!!",
                                    True, (0, 255, 225))
    message_over = largefont.render("!!GAME OVER!!",
                                    True, (0, 255, 225))
    message_rect = message_clear.get_rect()
    message_rect.center = (WIDTH*SIZE/2, HEIGHT*SIZE/2)
    game_over = False

    field = [[EMPTY for xpos in range(WIDTH)]for ypos in range(HEIGHT)]

    # 폭탄을 설치
    count = 0
    while count < NUMOFBOMB:
        xpos, ypos = randint(0, WIDTH-1), randint(0, HEIGHT-1)
        if field[ypos][xpos] == EMPTY:
            field[ypos][xpos] = BOMB
            count += 1

  
    #게임 실행
    while not game_over:
        for event in pygame.event.get():
            if event.type==QUIT:
                pygame.quit()
                sys.exit()
            
            if event.type==MOUSEBUTTONDOWN and event.button==1:
                X_POS=floor(event.pos[0]/SIZE)
                Y_POS=floor(event.pos[1]/SIZE)
                if field[Y_POS][X_POS]==BOMB:
                    print("폭탄 감지")
                    game_over=True
                else:
                    opentile(field,X_POS,Y_POS)

        #숫자 나타내기
        SURFACE.fill((0, 0, 0))
        for ypos in range(HEIGHT):
            for xpos in range(WIDTH):
                tile = field[ypos][xpos]
                rect = (xpos*SIZE, ypos*SIZE, SIZE, SIZE)

                if tile == EMPTY or tile == BOMB:
                    pygame.draw.rect(SURFACE,
                                     (192, 192, 192), rect)
                    if game_over and tile == BOMB:
                        pygame.draw.ellipse(SURFACE,
                                            (225, 225, 0), rect)
                elif tile == OPEN:
                    count = bombNum(field, xpos, ypos)
                    if count > 0:
                        num_image = smallfont.render(
                            "{}".format(count), True, (255, 255, 0))
                        SURFACE.blit(num_image,
                                     (xpos*SIZE+10, ypos*SIZE+10))

         # 선 그리기
        for index in range(0, WIDTH*SIZE, SIZE):
            pygame.draw.line(SURFACE, (96, 96, 96),
                             (index, 0), (index, HEIGHT*SIZE))
        for index in range(0, HEIGHT*SIZE, SIZE):
            pygame.draw.line(SURFACE, (96, 96, 96),
                             (0, index), (WIDTH*SIZE, index))

        # 메시지 나타내기
        if NUMOFOPEN == WIDTH*HEIGHT - NUMOFBOMB:
            SURFACE.blit(message_clear, message_rect.topleft)
        elif game_over:
            SURFACE.blit(message_over, message_rect.topleft)

        pygame.display.update()
        FPSCLOCK.tick(5)                             


if __name__ == '__main__':
    main()