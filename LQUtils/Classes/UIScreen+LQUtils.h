//
//  UIScreen+LQUtils.h
//  LQUtils
//
//  Created by LittleQ on 2019/3/30.
//

#import <UIKit/UIKit.h>

// UIScreen width.
#define LQ_SCREEN_WIDTH [UIScreen screenWidth]

// UIScreen height.
#define LQ_SCREEN_HEIGHT [UIScreen screenHeight]

// iPhone X
#define LQ_iPhoneX (LQ_SCREEN_WIDTH == 375.f && LQ_SCREEN_HEIGHT == 812.f ? YES : NO)

// Status bar height.
#define LQ_STATUS_BAR_HEIGHT      (LQ_iPhoneX ? 44.f : 20.f)

// Navigation bar height.
#define LQ_NAVIGATION_BAR_HEIGHT  44.f

// Tabbar height.
#define LQ_TABBAR_HEIGHT         (LQ_iPhoneX ? (49.f+34.f) : 49.f)

// Tabbar safe bottom margin.
#define LQ_TABBAR_SAFE_BOTTOM_MARGIN         (LQ_iPhoneX ? 34.f : 0.f)

// Status bar & navigation bar height.
#define LQ_STATUS_BAR_AND_NAVIGATION_BAR_HEIGHT  (LQ_iPhoneX ? 88.f : 64.f)

#define LQ_VIEW_SAFE_ARE_INSETS(view) ({UIEdgeInsets insets; if(@available(iOS 11.0, *)) {insets = view.safeAreaInsets;} else {insets = UIEdgeInsetsZero;} insets;})


@interface UIScreen (LQUtils)

+ (float)screenWidth;
+ (float)screenHeight;
+ (BOOL)isRetina;
+ (float)scale;
+ (float)statusHeight;

@end
