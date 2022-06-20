//vertex shader for custom 1 shader (flatten shader)
//code referenced from https://www.lighthouse3d.com/tutorials/glsl-12-tutorial/flatten-shader/

void main()
{
	vec4 v = vec4(gl_Vertex);
	v.z = 0.0;
	
	gl_Position = gl_ModelViewProjectionMatrix * v;
}
