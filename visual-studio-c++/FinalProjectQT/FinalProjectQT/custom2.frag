//custom 2 shader (fragment shader)
//source: https://softologyblog.wordpress.com/2020/11/30/creating-glsl-animated-gif-loops/
//https://learnopengl.com/Getting-started/Shaders
//https://stackoverflow.com/questions/48384564/webgl-glsl-time-variable-similar-to-shadertoy

uniform float time;
uniform vec2 resolution;

float animationSec = 2.0; //how long we want the animation to last before repeat
float pi2 = 3.1415926536*2;

void main() {

	//using time, it will change the color every second
	//time divided by 10 changes the color every 10 seconds (10x longer)
	//use sine looping to make the animation loop
	
	float sineVal = (sin(pi2 * (time-0.75)/animationSec)/2.0) + 0.5;

	gl_FragColor = vec4(sineVal, 0.5, 1-sineVal, 1.0);
}