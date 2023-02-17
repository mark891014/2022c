PImage img,img2;
void setup(){
  size(400,400);
  imgBG=loadImage("image.png");
  img=loadImage("astro.png");
}
void draw(){
  imageMode(CENTER);
  image(imgBG,200,200,400,400);
  image(img,mouseX,mouseY);
}
