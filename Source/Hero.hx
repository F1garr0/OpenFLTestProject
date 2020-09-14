import openfl.ui.Keyboard;
import js.html.AnimationPlaybackEvent;
import openfl.display.Sprite;
import AnimationDriver;
import openfl.events.Event;
import openfl.events.KeyboardEvent;
import openfl.ui.Keyboard;

class Hero extends Sprite {
    private var animation:AnimationDriver;

    public function new() {
        super();
        //animation = new AnimationDriver("assets/tiles.png");
        //animation.add("blink",3,0,0,64,64);
        //animation.play("blink");

        animation = new AnimationDriver("assets/mecha.png");
        animation.add("walk_down",16,0,0,64,64);
        animation.add("walk_right",16,0,128,64,64);
        animation.add("walk_up",16,0,256,64,64);
        animation.add("walk_left",16,0,384,64,64);

        animation.play("walk_up");
        addChild(animation);
        addEventListener (Event.ENTER_FRAME, this_onEnterFrame);
		//stage.addEventListener (KeyboardEvent.KEY_UP, stage_onKeyUp);
    }

    public function this_onEnterFrame(event:Event):Void {
        animation.update();
    }

	public function stage_onKeyUp (event:KeyboardEvent):Void {
		
		switch (event.keyCode) {

            case Keyboard.UP: animation.play("walk_up");
            case Keyboard.DOWN: animation.play("walk_down");
            case Keyboard.LEFT: animation.play("walk_left");
            case Keyboard.RIGHT: animation.play("walk_right");

			
		}
		
	}
}