//
//  CLLockLabel.h
//  CoreLock
//
//  "" on 15/4/27.
//     All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CLLockLabel : UILabel

/*
 *正常文字颜色
 */
@property (nonatomic,strong) UIColor *coreLockNormalColor;
/*
 *警告文字颜色
 */
@property (nonatomic,strong) UIColor *coreLockWarnColor;

/*
 *  普通提示信息
 */
-(void)showNormalMsg:(NSString *)msg;



/*
 *  警示信息
 */
-(void)showWarnMsg:(NSString *)msg;


@end
