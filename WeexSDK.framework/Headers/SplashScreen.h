//
//  SplashScreen.h
//  XYLib
//
//  Created by fantasy on 2021/6/9.
//

#import <WeexSDK/WXModuleProtocol.h>

NS_ASSUME_NONNULL_BEGIN

@interface SplashScreen : NSObject <WXModuleProtocol>
+ (void)show;
+ (void)hide;
@end

NS_ASSUME_NONNULL_END
