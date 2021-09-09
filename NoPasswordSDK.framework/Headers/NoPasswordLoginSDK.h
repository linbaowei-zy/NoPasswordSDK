//
//  NoPasswordLoginSDK.h
//  NoPasswordSDK
//
//  Created by 九州云腾 on 2018/12/14.
//  Copyright © 2018 九州云腾. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
typedef void (^SuccessBlock)(NSDictionary *resultDic);
typedef void (^FailureBlock)(NSDictionary *resultDic);
@interface NoPasswordLoginSDK : NSObject
/**
 * @brief 指纹或FaceID
 * @param  cancelTitle  取消按钮
 * @param  fallbackTitle  验证TouchID或FaceID时,在错误一次后显示出的可选按钮标题, 若不需要显示该按钮,传入一个空字符串即可
 * @param  reasonTitle 使用TouchID或FaceID的原因
 * @param  success  成功回调出,指纹或FaceID特征值
 * @param  failure 失败返回原因.
 *  如果是FACE_ID需要先申请权限,记得plist文件需要写入Privacy - Face ID Usage Description 否则项目crash
 */
-(void)VertifyTouchIDOrFaceID:(NSString *)cancelTitle fallbackTitle:(NSString *)fallbackTitle reasonTitle:(NSString *)reasonTitle success:(SuccessBlock )success failure:(FailureBlock )failure;
@end

