//
//  WKTrackerViewController.h
//  WiseTracker
//
//  Created by kunsookim on 2016. 12. 30..
//  Copyright © 2016년 Wisetracker. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <WebKit/WebKit.h>
@interface WKTrackerViewController : UIViewController
@property(strong,nonatomic) WKWebView* webView;
+ (WKTrackerViewController *)sharedInstance;
-(NSString*)eventTriggeredScriptToAddToDocument;
@end

