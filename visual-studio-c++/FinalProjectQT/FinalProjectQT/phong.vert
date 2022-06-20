//phong shading in shader code (vertex shader)
//code from http://www.swiftless.com/tutorials/glsl/6_materials.html

//variables for apply phong shading
//equation: kaIa + #numLights(i)[Ii(kd(N*L) + ks(V*R)^nshiny)]
//uniform keyword means it is a constant variable
//varying keyword is used to interpolate colors (allows fragment shader to access this information from vertex shader)
//varying variables in vertex shader can by modified in vertex shader, but read only in fragment shader

varying vec3 vertex_light_position;
varying vec3 vertex_light_half_vector;
varying vec3 vertex_normal;

void main() {            
    // Calculate the normal value for this vertex, in world coordinates (multiply by gl_NormalMatrix)
    vertex_normal = normalize(gl_NormalMatrix * gl_Normal);
    // Calculate the light position for this vertex
    vertex_light_position = normalize(gl_LightSource[0].position.xyz);

    // Calculate the light’s half vector
    vertex_light_half_vector = normalize(gl_LightSource[0].halfVector.xyz);

    // Set the front color to the color passed through with glColor*f
    gl_FrontColor = gl_Color;
    // Set the position of the current vertex 
    gl_Position = gl_ModelViewProjectionMatrix * gl_Vertex;
} 