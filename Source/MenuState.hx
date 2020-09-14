import openfl.display.SimpleButton;
import openfl.display.Sprite;
import openfl.events.Event;

class MenuState extends AbastractState {

    public function new(context) {
        this.context = context;
        super();

        var upState = new Sprite();
		upState.graphics.beginFill(0xFF005A);
        upState.graphics.drawRect(100,100,100,100);

        var downState = new Sprite();
		downState.graphics.beginFill(0x5A00FF);
        downState.graphics.drawRect(100,100,100,100);

        var button = new SimpleButton(upState,downState,downState,downState);
        button.x = 300;
        button.y = 300;
        //button.addEventListener()
        //addChild(sprite);
        addChild(button);
    }
    
    public override function update(event:Event):Void {
        trace("updating menu state");
    }
}