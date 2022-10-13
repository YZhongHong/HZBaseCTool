//
//  LMCommenServiceHeader.h
//  LoginService
//LMBaseDefineHeader
//  Created by Mac on 2022/2/24.
//

#ifndef LMCommenServiceHeader_h
#define LMCommenServiceHeader_h

// 其他登录通知
static NSString * _Nullable LM_OtherLoginNotificationName = @"LM_OtherLoginNotificationName";

static NSString * _Nullable LM_MyInformationChanges = @"LM_MyInformationChanges";

static NSString * _Nullable LM_ChangeBalanceSwitchType = @"LM_ChangeBalanceSwitchType";

static NSString * _Nullable LM_ForcedToUpdate = @"LM_ForcedToUpdate";

static NSString * _Nullable LM_UploadVideoPath = @"LM_UploadVideoPath";

static NSString * _Nullable LM_FaceMatchingPassesNotificationName = @"LM_FaceMatchingPassesNotificationName";

static NSString * _Nullable LM_MyInformationChanges_UIUpData = @"LM_SetCallTypeNoti";


static NSString * _Nullable LM_BasePusVCNotificationName = @"LM_BasePusVCNotificationName";

static NSString * _Nullable LM_CheckStatusNotificationName = @"LM_CheckStatusNotificationName";


static NSString * _Nullable LM_AddressBoobChangesNotificationName = @"LM_AddressBoobChangesNotificationName";

static NSString * _Nullable LM_CallReCorsChange = @"LM_CallReCorsChange";

static NSString * _Nullable LM_IntentionToTagNotificationName = @"LM_IntentionToTagNotificationName";

static NSString * _Nullable LM_AccountsPrepaidPhone = @"LM_AccountsPrepaidPhone";

static NSString * _Nullable LM_EndPersonalInformationNotificationName = @"LM_EndPersonalInformationNotificationName";

static NSString * _Nullable LM_ChanePackageNotificationName = @"LM_ChanePackageNotificationName";

static NSString * _Nullable LM_CallTimeUpDataNotificationName = @"LM_CallTimeUpDataNotificationName";



static NSString * _Nullable lmpushNameKey = @"lmpushNameKey";

static NSString * _Nullable lmpushNamePar = @"lmpushNamePar";


typedef void (^LMMJRefreshComponentAction)(void);

/**
 *  一般操作成功回调
 */
typedef void (^LMNetSucc)(id _Nullable responseObject);

/**
 *  操作失败回调
 *
 *  @param code 错误码
 *  @param msg  错误描述，配合错误码使用，如果问题建议打印信息定位
 */
typedef void (^LMNetFail)(NSInteger code, NSString * _Nullable msg);

typedef enum : NSUInteger {
    LMMJRefresh_header,
    LMMJRefresh_footer,
} LM_MJRefresh;

typedef enum : NSUInteger {
    LMDetailBalance,// 余额
    LMDetailVoice,// 语音ming
} LMDetailType;// 明细类型

typedef enum : NSUInteger {
    LMChoosePackage,// 选择套餐
    LMChangePackage,//变更套餐
    LMUndoPackage,//撤销变更
} LMPackageList;//套餐列表


typedef enum : NSUInteger {
    Agreement,// 用户协议
    Privacy,// 隐私协议
} LMRequestWebType;

typedef enum : NSUInteger {
    NoneCall,
    IPCall,//IP拨号
    DirectCall,//直拨
} LMDialUpWay;// 拨号方式

typedef enum : NSUInteger {
    LMNoCode,
    LMSuccessAuthCode = 0, // 实名认证返回的成功code
    LMSuccessCode = 200,// 落地电话 返回成功的copde
    LMUnboundMumberCode = 202,// 未绑定号码
    LMInsufficientVoice,// 语音不足 余额足 也能拨打电话
    LMRiskCode,//风险
    LMInsufficientBalanceCode,//余额不足
    LMNORealName,// 未实名
    LMNoAccountOpenedCode,//未开户
    LMAuditFailure,// 审核失败
    
    LMSetRequetCallTypeCode = 209,// 设置拨打方式
    
    LMOtherLogin = 888,// 其他地方登陆
    
    LMAccountAuditFailed = 9987,// 账户审核未通过
    LMAccountInReview = 9988,// 账户审核中
    LMAccountNoRealName = 9989,// 账户未实名
    
   LMAppInReview = 9994,// App审核中
   LMAppAuditFailed = 9995,// App审核失败
   LMAppNORealName = 9996,// App未实名
        
    LMVersionForcedUpdate = 9997,//版本强制更新
    LMFaceVerification = 9998,// 人脸对比
    LMAccountBalanceCode = 9999,//余额不足
    
    LMNnregistered = 40001,// 未注册

    
    LMSetCallTypeCode = 100000,// 设置拨打方式

    
    LMMicrophoneCode = 300000, //设置相机权限
    LMBindingNumberContrastCode = 300001, //绑定号码 人脸比对
    LMVersionOptionalUpdates = 300002,//可选更新
    LMAccountsPrepaidPhoneCode = 300003,//开户充值
    LMDialIPCode = 300004,//ip拨号介绍
    LMDialDirectCode = 300005,//直拨介绍
    LMSetUpDirectCode = 300006,//设置直拨号码弹框
    LMChangeDirectPhoneCode = 300007,//设置直拨号码弹框
    
    LMChangePackageCode = 300008,//变更套餐选择
} LMHttpErrCode;

typedef enum : NSUInteger {
    None,
    Usual,// title + msg
    Image,// title + image + msg
    InputView,// title + inputView + msg
} LMShowAlertType;

#endif /* LMCommenServiceHeader_h */
