//
//  LMBaseDefineHeader.h
//  LMBEPhone
//
//  Created by iMac on 2022/2/17.
//  Copyright © 2022 LMTX. All rights reserved.
//

#ifndef LMBaseDefineHeader_h
#define LMBaseDefineHeader_h


#define LM_ScreenWidth [UIScreen mainScreen].bounds.size.width

#define LM_ScreenHeight [UIScreen mainScreen].bounds.size.height

#define LM_LineViewWorH 1.0/[UIScreen mainScreen].scale

#define LM_Safe_ 1.0/[UIScreen mainScreen].sa

/*
 颜色的16进制
 */
#define LM_UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float) ((rgbValue & 0xFF0000) >> 16)) / 255.0 green:((float) ((rgbValue & 0xFF00) >> 8)) / 255.0 blue:((float) (rgbValue & 0xFF)) / 255.0 alpha:1.0]

#define LM_AUIColorFromRGB(rgbValue,Alpha) [UIColor colorWithRed:((float) ((rgbValue & 0xFF0000) >> 16)) / 255.0 green:((float) ((rgbValue & 0xFF00) >> 8)) / 255.0 blue:((float) (rgbValue & 0xFF)) / 255.0 alpha:Alpha]


/* 协议 成员变量 */
#define LMCreateService(LMProtocal,LMMemberVariables) id<LMProtocal> LMMemberVariables = [[BeeHive shareInstance] createService:@protocol(LMProtocal)];

#define LMRegisterService(LMClass) -(void)modSetUp:(BHContext *)context{}-(void)modInit:(BHContext *)context{[[BeeHive shareInstance] registerService:@protocol(LMCallPhoneService) service:LMClass];}

/*
 多语言
 */
#define LM_Localized(key) [[NSBundle bundleWithPath:[[NSBundle mainBundle] pathForResource:[NSString stringWithFormat:@"%@", @"zh-Hans"] ofType:@"lproj"]] localizedStringForKey:(key) value:nil table:@"Strings"]

// #define Localized(key) [NSBundle ts_localizedStringForKey:key]

#define LMWEAKSELF typeof(self) __weak weakSelf = self;

#define LMBlockSelf typeof(self) __block blockSelf  = self;

#define LMPer_page 10
#endif /* LMBaseDefineHeader_h */
