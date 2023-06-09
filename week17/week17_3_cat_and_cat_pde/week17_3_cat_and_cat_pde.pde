PImage catt,catt2;
void setup(){
   size(600,600);
   catt=loadImage("catt.png");
   catt2=loadImage("catt2.png");
}
void draw(){
    background(255);
    image(catt,0,80,250,300);
    image(catt2,x,y);
}
float x=300,y=0;
void mouseDragged(){
  x+=(mouseX-pmouseX);
  y+=(mouseY-pmouseY);
}
