#pragma once

#define GLEW_STATIC
#include <gl/glew.h>

// From:
// https://github.com/opengl-tutorials/ogl/blob/master/common/shader.hpp
GLuint LoadShaders(const char * vertex_file_path, const char * fragment_file_path);
