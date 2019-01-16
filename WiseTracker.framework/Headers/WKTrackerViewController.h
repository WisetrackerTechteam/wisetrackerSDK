//
//  WKTrackerViewController.h
//  WiseTracker
//
//  Created by kunsookim on 2016. 12. 30..
//  Copyright © 2016년 Wisetracker. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface WKTrackerViewController : UIViewController
+ (WKTrackerViewController *)sharedInstance;
-(NSString*)eventTriggeredScriptToAddToDocument;
@end

