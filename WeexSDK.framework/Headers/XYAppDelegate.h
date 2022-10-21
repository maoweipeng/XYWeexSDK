//
//  XYAppDelegate.h
//  XYLib
//
//  Created by fantasy on 2021/6/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

#define CHANNEL [[NSBundle mainBundle] objectForInfoDictionaryKey:@"Channel"]
#define UserAgent [[NSBundle mainBundle] objectForInfoDictionaryKey:@"UserAgent"]
#define kUMKEY [[NSBundle mainBundle] objectForInfoDictionaryKey:@"kUMKEY"]
#define JPUSHKEY [[NSBundle mainBundle] objectForInfoDictionaryKey:@"JPUSHKEY"]

@interface XYAppDelegate : UIResponder <UIApplicationDelegate>

@property (nonatomic, strong) UIWindow *window;
@property (nonatomic, assign) bool background;//  进入后台标记

@end

NS_ASSUME_NONNULL_END
