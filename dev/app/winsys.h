////////////////////////////////////////////////////////////////////////////////////////
// xwinsys.h
//
// X Windows managment system
////////////////////////////////////////////////////////////////////////////////////////
#ifndef _WINDOW_SYSTEM_
#define _WINDOW_SYSTEM_

#include <X11/Xlib.h>
#include <X11/Xutil.h>


////////////////////////////////////////////////////////////////////////////////////////
// X windows managment system class
class CWindowSystem
{
public:
    CWindowSystem();
    ~CWindowSystem();
    
    int CreateDisplayWindow();
    bool ReleaseDisplayWindow();
    void ProcessEvents();
    
protected:
    Display *mDisplay;
    Window mWindow;
    Atom mDelWndMsg;
};
////////////////////////////////////////////////////////////////////////////////////////
#endif //_WINDOW_SYSTEM_