import openfl.display.Sprite;
import openfl.events.Event;

class MenuState extends AbastractState {

    public function new(context) {
        this.context = context;
        super();

        var sprite = new Sprite();
		sprite.graphics.beginFill(0xFF005A);
        sprite.graphics.drawRect(100,100,100,100);
        addChild(sprite);
    }
    
    public override function update(event:Event):Void {
        trace("updating menu state");
    }
}