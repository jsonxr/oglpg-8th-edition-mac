//----------------------------------------------------------------------------
//  vgl.h
//----------------------------------------------------------------------------

#ifndef __VGL_H__
#define __VGL_H__

#ifdef __APPLE__
#include <OpenGL/gl3.h>
#else
#include <GL/gl3.h>
#endif

#define BUFFER_OFFSET(x)  ((const void*) (x))

#endif