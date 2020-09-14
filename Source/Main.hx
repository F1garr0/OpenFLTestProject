package;

import openfl.events.GameInputEvent;
import js.html.PopStateEvent;
import openfl.events.Event;
import openfl.display.Bitmap;
import openfl.display.BitmapData;
import openfl.display.Sprite;
import openfl.Assets;
import GameState;
import AbastractState;
import StateContext;
import openfl.events.KeyboardEvent;

class Main extends Sprite implements StateContext{

	private var sprite:Sprite;
	private var state:AbastractState;
	
	public function new () {		
		super ();
		
		this.stage.color = 0x222222;

		state = new GameState(this);
		addChild(state);
		stage.addEventListener (Event.ENTER_FRAME, state.update);
		stage.addEventListener(KeyboardEvent.KEY_DOWN, state.keyboardEventHandle);
        stage.addEventListener(KeyboardEvent.KEY_UP, state.keyboardEventHandle);
	}

	public function setState(newState:AbastractState) {
		stage.removeEventListener(Event.ENTER_FRAME,state.update);
		removeChildAt(0);
		state = newState;
		addChild(state);
		stage.addEventListener(Event.ENTER_FRAME,state.update);
		
	}
}