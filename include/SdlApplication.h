//----------------------------------------------------------------------------
//  SdlApplication.h
//----------------------------------------------------------------------------

#ifndef __SDL_APPLICATION_H__
#define __SDL_APPLICATION_H__

#include <SDL2/SDL.h>

struct SdlApplication
{
public:
	SdlApplication();
	~SdlApplication();
	
	// Application state (just convenience instead of 0, 1, ...).
	enum APP_STATE
	{
		APP_OK = 0,
		APP_FAILED = 1
	};
	
	// Initialize application, called by run(), don't call manually.
    virtual
	int init(int width, int height);
	
	// Destroy application, called by destructor, don't call manually.
	void destroy();
	
	// Run application, called by your code.
	int run(int width, int height);
	
	// Called to process SDL event.
	void onEvent(SDL_Event* ev);
	
	// Called to render content into buffer.
    virtual
	void Render();
	
	// Whether the application is in event loop.
	bool _running;
	SDL_Window *win;
    SDL_GLContext maincontext; /* Our opengl context handle */
};

#endif