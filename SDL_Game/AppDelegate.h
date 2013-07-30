//
//  AppDelegate.h
//  SDL_Game
//
//  Created by staff on 7/21/13.
//  Copyright (c) 2013 staff. All rights reserved.
//

#import <Cocoa/Cocoa.h>

@interface AppDelegate : NSObject <NSApplicationDelegate> {
@private
    NSWindow *window;
}
@property (assign) IBOutlet NSWindow *window;

@end
