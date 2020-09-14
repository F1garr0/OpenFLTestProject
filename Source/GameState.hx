import haxe.ds.ObjectMap;
import openfl.display.Sprite;
import openfl.events.Event;
import MenuState;
import AbastractState;
import Hero;
import openfl.events.KeyboardEvent;
import openfl.ui.Keyboard;

class GameState extends AbastractState {

    public var hero:Hero;

    public function new(context) {
        this.context = context;
        super();
        
        var sprite = new Sprite();
		sprite.graphics.beginFill(0xFF005A);
        sprite.graphics.drawCircle(100,100,100);
        addChild(sprite);

        hero = new Hero();
        addChild(hero);
    }
    
    
    public override function update(event:Event):Void {
        trace("updating game state");
    }

    public override function keyboardEventHandle(event:KeyboardEvent):Void {
        hero.stage_onKeyUp(event);
        switch (event.keyCode) {
			case Keyboard.ESCAPE: context.setState(new MenuState(context));
		}
    }
}