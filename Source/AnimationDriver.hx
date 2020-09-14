import openfl.display.Tilemap;
import openfl.display.Sprite;
import openfl.display.Tileset;
import openfl.display.BitmapData;
import openfl.Assets;
import js.html.svg.AnimatedAngle;
import haxe.ds.HashMap;
import openfl.geom.Rectangle;
import AnimatedTile;

class AnimationDriver extends Sprite {

    private var animations:Map<String,AnimatedTile>;
    private var tileSet:Tileset;
    private var tileMap:Tilemap;
    private var currentAnimation:String;

    public function new(texturePath:String) {
        trace("new");
        super();
        var bitmapData = Assets.getBitmapData (texturePath);
        tileSet = new Tileset(bitmapData);
        animations = new Map<String,AnimatedTile>();
        tileMap = new Tilemap(64,64,tileSet,true);
    }

    public function play(animationName:String) {
        //tileMap.removeTiles();
        tileMap.removeTiles();
        trace("play");
        currentAnimation = animationName;
        //trace(animations);
        //trace(animations.get(currentAnimation));
        var tile = animations.get(currentAnimation);
        trace(tile);
        tileMap.addTile(tile);
        trace("end play");
    }

    public function add(animationName:String, frames:Int, startX:Int, startY:Int, sizeX:Int, sizeY:Int) {
        trace("add");
        var animationData:Array<Int> = []; 
        var rect = new Rectangle (0, startY, sizeX, sizeY);
        for(i in 0...frames-1){ 
            rect.x = sizeX * i;
            animationData.push(tileSet.addRect(rect));
        }
        //var animation:AnimatedTile = new AnimatedTile(animationData);
        animations[animationName] = new AnimatedTile(animationData);
        removeChild(tileMap);
        tileMap = new Tilemap(64,64,tileSet,true);
        addChild(tileMap);
    }

    public function update() {
        animations[currentAnimation].update();
    }
}