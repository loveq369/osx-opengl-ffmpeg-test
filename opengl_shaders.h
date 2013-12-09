#ifndef __FFMPEG_VIEW__H__
#define __FFMPEG_VIEW__H__

#import <CoreVideo/CVDisplayLink.h>
#import <OpenGL/gl3.h>

@interface FfmpegView : NSOpenGLView <NSWindowDelegate>

-(void)registerDisplayLink;
-(void)renderForTime:(CVTimeStamp)time;
-(void)windowWillClose:(NSNotification*)note;
@end

#endif //__FFMPEG_VIEW__H__