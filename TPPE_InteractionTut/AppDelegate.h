//
//  AppDelegate.h
//  TPPE_InteractionTut
//
//  Created by Aaron Goselin on 11-05-31.
//  Copyright Nucratic Technologies 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
