import haxe.ds.ObjectMap;
import openfl.display.Sprite;
import openfl.events.Event;
import MenuState;
import openfl.events.KeyboardEvent;

class AbastractState extends Sprite implements State{
    private var context:StateContext;

    public function new() {
        super();
    }
    
    public function update(event:Event):Void {
        trace("updating abstract state");
    }
    
    public function keyboardEventHandle(event:KeyboardEvent):Void {
        
    }
}