import pyglet

window = pyglet.window.Window(width=500, height=500)
image = pyglet.image.load('basketball.png')
sprite_of_ball = pyglet.sprite.Sprite(image, x=250, y=250)
gravity = -500
vx, vy = 200, 200

def update(dt):
    global vx, vy
    sprite_of_ball.x += vx * dt
    sprite_of_ball.y += vy * dt
    vy += gravity * dt
    if sprite_of_ball.x < 0 or sprite_of_ball.x > window.width:
        vx = -vx
    if sprite_of_ball.y < 0:
        vy = -vy * 0.9
        sprite_of_ball.y = 0
@window.event
def on_draw():
    window.clear()
    sprite_of_ball.draw()

pyglet.clock.schedule(update)
pyglet.app.run()