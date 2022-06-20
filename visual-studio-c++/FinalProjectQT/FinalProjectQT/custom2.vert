//custom 2 shader (vertex shader)

void main() {
	vec4 v = vec4(gl_Vertex);

	gl_Position = gl_ModelViewProjectionMatrix * v;
}