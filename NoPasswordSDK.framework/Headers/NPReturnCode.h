//
//  NPReturnCode.h
//  NoPasswordSDK
//
//  Created by 九州云腾 on 2021/9/3.
//  Copyright © 2021 九州云腾. All rights reserved.
//

#ifndef NPReturnCode_h
#define NPReturnCode_h
#import <Foundation/Foundation.h>

#pragma mark - 该返回码为指纹/FACE_ID时的不同情况

/// 指纹/FACE_ID验证成功
static NSString * const NPLAAuthenticationSuccess = @"0";
/// 连续三次识别错误,TouchID验证失败
static NSString * const NPLAErrorAuthenticationFailed = @"1417";
/// 指纹/FACE_ID被用户手动取消
static NSString * const NPLAErrorUserCancel = @"1418";
/// 系统取消授权,如其他APP切入
static NSString * const NPLAErrorSystemCancel = @"1419";
/// 设备未设置手机密码
static NSString * const NPLAErrorPasscodeNotSet = @"1420";
/// 用户未设置指纹/FACE_ID
static NSString * const NPLAErrorTouchIDNotEnrolled = @"1421";
/// 用户选择输入密码
static NSString * const NPLAErrorUserFallback = @"1422";
/// TouchID 被锁定(连续多次验证TouchID失败,系统需要用户手动输入密码)
static NSString * const NPLAErrorTouchIDLockout = @"1423";
/// 当前软件被挂起
static NSString * const NPLAErrorAppCancel = @"1424";
/// 未知错误
static NSString * const NPLAErrorInvalidContext = @"1425";
/// 设备不支持TouchID
static NSString * const NPLAErrorTouchIDNotAvailable = @"1426";

#endif /* NPReturnCode_h */
