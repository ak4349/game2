import pygame
import random
import math
pygame.init()
screen=pygame.display.set_mode((800,600))
pygame.display.set_caption("space invaday by amit yadav")
icon=pygame.image.load("player.png")
pygame.display.set_icon(icon)
playerimg=pygame.image.load("player.png")
playerx=300
playery=536
playerx_change=0

enemyimg=[]
enemyx=[]
enemyy=[]
enemyx_change=[]
enemyy_change=[]
number_of_enemy=5
for i in range(number_of_enemy):
    enemyimg.append(pygame.image.load("enemy.png"))
    enemyx.append(random.randint(0,735))
    enemyy.append(random.randint(0,300))
    enemyx_change.append(1)
    enemyy_change.append(1)

bulletimg=pygame.image.load("bullet.png")
bulletx=0
bullety=480
bulletx_change=0
bullety_change=10
bullet_state="ready"
score_value=0
font=pygame.font.Font("freesansbold.ttf",32)
textx=10
texty=10
over_font=pygame.font.Font("freesansbold.ttf",64)
running=True
def game_over_text(x,y):
    score = font.render("GAME OVER " , True, (255, 255, 255))
    screen.blit(score, (250,200))

def show_score(x,y):
    score=font.render("score : " +str(score_value),True,(255,255,255))
    screen.blit(score,(x,y))

def player(x,y):
    screen.blit(playerimg,(x,y))

def enemy(x,y,i):
    screen.blit(enemyimg[i],(x,y))

def fire_bullet(x,y):
    global bullet_state
    bullet_state="fire"
    screen.blit(bulletimg,(x+16,y+10))

def iscollision(enemyx,enemyy,bulletx,bullety):
    distance=math.sqrt(math.pow(enemyx-bulletx,2)+(math.pow(enemyy-bullety,2)))
    if distance<27:
        return True
    else:
        return False

while running:
    screen.fill((200,200,200))
    for event in pygame.event.get():
        if event.type==pygame.QUIT:
            running=False
        if event.type==pygame.KEYDOWN:
            if event.key==pygame.K_LEFT:
                playerx_change=-1
            if event.key==pygame.K_RIGHT:
                playerx_change=1
            if event.key==pygame.K_SPACE:
                if bullet_state is "ready":
                    bulletx=playerx
                    fire_bullet(bulletx,bullety)
        if event.type==pygame.KEYUP:
            if event.key==pygame.K_LEFT or event.key==pygame.K_RIGHT:
                playerx_change=0
    playerx+=playerx_change
    if playerx<=0:
        playerx=0
    elif playerx>=736:
        playerx=736
    for i in range(number_of_enemy):
        if enemyy[i]>400:
            for j in range(number_of_enemy):
                enemyy[j]=2000
            game_over_text(500,300)
            break
        enemyx[i]+=enemyx_change[i]
        if enemyx[i]<=0:
            enemyx_change[i]=2
            enemyy[i]+=enemyy_change[i]
        elif enemyx[i]>=736:
            enemyx_change[i]=-2
            enemyy[i]+=enemyy_change[i]

        collision = iscollision(enemyx[i], enemyy[i], bulletx, bullety)
        if collision:
            bullety = 480
            bullet_state = "ready"
            score_value += 1
            enemyx[i] = random.randint(0, 735)
            enemyy[i] = random.randint(50, 250)

        enemy(enemyx[i], enemyy[i],i)

    if bullety<=0:
        bullety=480
        bullet_state="ready"
    if bullet_state is "fire":
        fire_bullet(bulletx,bullety)
        bullety-=bullety_change


    show_score(textx,texty)
    player(playerx,playery)
    pygame.display.update()