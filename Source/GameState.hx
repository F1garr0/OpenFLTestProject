import haxe.ds.ObjectMap;
import openfl.display.Sprite;
import openfl.events.Event;
import MenuState;
import AbastractState;
import openfl.events.KeyboardEvent;
import openfl.ui.Keyboard;

class GameState extends AbastractState {

    public function new(context) {
        this.context = context;
        super();

        var sprite = new Sprite();
		sprite.graphics.beginFill(0xFF005A);
        sprite.graphics.drawCircle(100,100,100);
        addChild(sprite);
    }
    
    
    public override function update(event:Event):Void {
        trace("updating game state");
    }

    public override function keyboardEventHandle(event:KeyboardEvent):Void {
        switch (event.keyCode) {
			case Keyboard.DOWN: context.setState(new MenuState(context));
		}
    }
}