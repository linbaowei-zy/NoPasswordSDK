//
//  CLLockView.h
#import <UIKit/UIKit.h>
typedef enum CoreLockType{
    //设置密码
    CoreLockTypeSetPwd,
    //输入并验证密码
    CoreLockTypeVerifyPwd,
    //修改密码
    CoreLockTypeModifyPwd,
} CoreLockType;
@interface CLLockView : UIView
//每个手势点的间距,间接改变圆的大小marginValue越大圆越小
@property (nonatomic,assign) CGFloat marginValue;
@property (nonatomic,assign) CoreLockType type;
/** 最低设置密码数目 */
@property (nonatomic,assign) NSInteger coreLockMinItemCount;
/** 内圆大小比例 */
@property (nonatomic,assign) CGFloat coreLockArcWHR;
/** 连线宽度 */
@property (nonatomic,assign) CGFloat coreLockArcLineW;
/**外圆默认背景颜色*/
@property (nonatomic,strong) UIColor *coreLockViewNormalBgColor;
/**外圆选中背景颜色*/
@property (nonatomic,strong) UIColor *coreLockViewBgColor;
/**线条选中颜色：默认*/
@property (nonatomic,strong) UIColor *coreLockCircleLineSelectedColor;
/**内圆颜色：默认*/
@property (nonatomic,strong) UIColor *coreLockCircleLineNormalCircleColor;
/**内圆颜色：选中*/
@property (nonatomic,strong) UIColor *coreLockCircleLineSelectedCircleColor;

-(void)lockViewPrepare;
/*
 *  设置密码
 */
/** 开始输入，第一次 */
@property (nonatomic,copy) void (^setPWBeginBlock)(void);
/** 开始输入，确认密码*/
@property (nonatomic,copy) void (^setPWConfirmlock)(void);
/** 设置密码出错：长度不够 */
@property (nonatomic,copy) void (^setPWSErrorLengthTooShortBlock)(NSUInteger currentCount);
/** 设置密码出错：再次密码不一致 */
@property (nonatomic,copy) void (^setPWSErrorTwiceDiffBlock)(NSString *pwd,NSString *pwdNow);
/** 设置密码：第一次输入正确*/
@property (nonatomic,copy) void (^setPWFirstRightBlock)(NSString *pwd);
/** 再次密码输入一致 */
@property (nonatomic,copy) void (^setPWTwiceSameBlock)(NSString *pwd);
/*
 *  重设密码
 */
-(void)resetPwd;
/*
 *  验证密码
 */

/** 验证密码开始*/
@property (nonatomic,copy) void (^verifyPWBeginBlock)(void);
/** 验证密码 */
@property (nonatomic,copy) BOOL (^verifyPwdBlock)(NSString *pwd);
/*
 *  修改密码
 */
/** 再次密码输入一致 */
@property (nonatomic,copy) void (^modifyPwdBlock)(void);
/** 密码修改成功 */
@property (nonatomic,copy) void (^modifyPwdSuccessBlock)(void);
/** 是否错误 */
@property (nonatomic,assign) BOOL isError;

/**添加*/
-(void)lockViewPrepare;

@end
